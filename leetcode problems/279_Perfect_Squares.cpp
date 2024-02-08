//---279. Perfect Squares---

// Given an integer n, return the least number of perfect square numbers that sum to n.

// A perfect square is an integer that is the square of an integer; in other words, 
// it is the product of some integer with itself. For example, 1, 4, 9, and 16 are 
// perfect squares while 3 and 11 are not.

// Example 1:
// Input: n = 12
// Output: 3
// Explanation: 12 = 4 + 4 + 4.

// Example 2:
// Input: n = 13
// Output: 2
// Explanation: 13 = 4 + 9.

#include<iostream>
using namespace std;

int dp[10001];

int solve(int n) {
    if(n == 0) {
        return 0;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    int minCount = INT_MAX;
    for(int i = 1; i*i <= n; i++) {
        int result = 1 + solve(n - (i*i));

        minCount = min(minCount, result);
    }
    return dp[n] = minCount;
}

int numSquares(int n) {
    memset(dp, -1, sizeof(dp));
    return solve(n);
}

int main() {
    int n = 12;
    int ans = numSquares(n);
    cout << "Output: " << ans << endl;

    return 0;
}