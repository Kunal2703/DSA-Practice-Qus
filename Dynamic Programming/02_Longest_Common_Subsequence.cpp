// Example 1:
// Input: s1 = "abcde", s2 = "ace" 
// Output: 3  
// Explanation: The longest common subsequence is "ace" and its length is 3.

// Example 2:
// Input: s1 = "abc", s2 = "abc"
// Output: 3
// Explanation: The longest common subsequence is "abc" and its length is 3.

// Example 3:
// Input: s1 = "abc", s2 = "def"
// Output: 0
// Explanation: There is no such common subsequence, so the result is 0.


#include<iostream>
using namespace std;

int m, n;
int dp[1001][1001];

int solve(string &s1, string &s2, int i, int j) {
    
    if(i >= m || j >= n) {
        return 0;
    }

    if(dp[i][j] != -1) {
        return dp[i][j];
    }

    if(s1[i] == s2[j]) {
        return 1 + solve(s1, s2, i+1, j+1);
    }

    else {
        return dp[i][j] = max(solve(s1, s2, i, j+1), solve(s1, s2, i+1, j));
    }

}

int longestCommonSubsequence(string s1, string s2) {
    m = s1.size();
    n = s2.size();

    memset(dp, -1, sizeof(dp));

    return solve(s1, s2, 0, 0);
}

int main() {

    string s1;
    cout << "Enter the String 1: ";
    cin >> s1;

    string s2;
    cout << "Enter the String 2: ";
    cin >> s2;

    int result = longestCommonSubsequence(s1, s2);
    cout << "Output: " << result << endl;

    return 0;
}