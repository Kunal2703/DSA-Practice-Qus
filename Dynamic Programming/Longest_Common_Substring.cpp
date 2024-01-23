// Examples : 

// Input : X = '“GeeksforGeeks”', y = “GeeksQuiz” 
// Output : 5 
// Explanation:
// The longest common substring is “Geeks” and is of length 5.

// Input : X = “abcdxyz”, y = “xyzabcd” 
// Output : 4 
// Explanation:
// The longest common substring is “abcd” and is of length 4.

#include<iostream>
using namespace std;


int dp[1001][1001];
int n, m;

int solve(string &s1, string &s2, int i, int j) {

    if(i >= n || j >= m) {
        return 0;
    }

    if(dp[i][j] != -1) {
        return dp[i][j];
    }

    int ans = 0;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(s1[i-1] == s2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
                ans = max(ans, dp[i][j]);
            }
            else {
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}

int longestCommonSunstring(string s1, string s2) {
    n = s1.size();
    m = s2.size();

    memset(dp, -1, sizeof(dp));

    return solve(s1, s2, 0, 0);
}

int main() {
    string s1 = "dddabcaafdgssfdgsdg";
    string s2 = "bbbabcdeffffffff";

    int result = longestCommonSunstring(s1, s2);
    cout << "Output: " << result << endl;

    return 0;
}