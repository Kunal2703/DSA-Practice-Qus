// Example 1:
// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

// Example 2:
// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

// Example 3:
// Input: n = 4
// Output: 3
// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.


#include<iostream>
using namespace std;

int dp[31];

int solve(int n) {
    if(n <= 1) {
        return n;
    }
    if(dp[n] != -1) {
        return dp[n];
    }

    return dp[n] = solve(n-2) + solve(n-1);
}

int fib(int n) {

    memset(dp, -1, sizeof(dp));

    return solve(n);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = fib(n);
    cout << "Output: " << result << endl;
    return 0;
}