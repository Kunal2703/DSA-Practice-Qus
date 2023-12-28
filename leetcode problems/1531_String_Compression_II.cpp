#include <iostream>
using namespace std;

int dp[101][27][101][101];
int solve(string &s, int i, int prev_char, int freq, int k)
{

    // base case
    if (k < 0)
    {
        return INT_MAX;
    }
    if (i >= s.length())
    {
        return 0;
    }

    if (dp[i][prev_char][freq][k] != -1)
    {
        return dp[i][prev_char][freq][k];
    }

    int delete_ith_char = solve(s, i + 1, prev_char, freq, k - 1);

    int not_delete_ith_char = 0;

    if (s[i] - 'a' != prev_char)
    {
        not_delete_ith_char = 1 + solve(s, i + 1, s[i] - 'a', 1, k);
    }
    else
    {
        int add_one_more_char = 0;

        if (freq == 1 || freq == 9 || freq == 99)
        {
            add_one_more_char = 1;
        }
        not_delete_ith_char = add_one_more_char + solve(s, i + 1, prev_char, freq + 1, k);
    }
    return dp[i][prev_char][freq][k] = min(delete_ith_char, not_delete_ith_char);
}

int getLengthOfOptimalCompression(string s, int k)

{
    //memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 101; ++i)
    {
        for (int j = 0; j < 27; ++j)
        {
            for (int k = 0; k < 101; ++k)
            {
                for (int l = 0; l < 101; ++l)
                {
                    dp[i][j][k][l] = -1;
                }
            }
        }
    }
    return solve(s, 0, 26, 0, k);
}

int main() {

    string s = "aaabcccd";
    int k = 2;

    // string s = "aabbaa";
    // int k = 2;

    // string s = "aaaaaaaaaaa";
    // int k = 0;

    int result = getLengthOfOptimalCompression(s, k);
    cout<< "Output: " << result << endl;

    return 0;
}