// Example 1:
// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps

// Example 2:
// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

#include<iostream>
using namespace std;

int dp[46];

int solve(int n) {
    if(n < 0) {
        return 0;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    if(n == 0) {
        return 1;
    }

    int one_step = solve(n-1);
    int two_step = solve(n-2);

    return dp[n] = one_step + two_step;
}

int climbStairs(int n) {

    memset(dp, -1, sizeof(dp));
    return solve(n);
}

int main() {
    int n;
    cout << "Enter the stairs: ";
    cin >> n;

    int result = climbStairs(n);
    cout << "Output: " << result << endl;

    return 0;
}