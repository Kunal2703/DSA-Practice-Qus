// 96. Unique Binary Search Trees

// Example 1:
// Input: n = 3
// Output: 5

// Example 2:
// Input: n = 1
// Output: 1

#include <iostream>
using namespace std;

// Declare an array to store computed results for dynamic programming
int dp[21];

int solve(int n) {
    // Base case: If n is 0 or 1, return 1 (empty tree or single-node tree)
    if (n <= 1) {
        return 1;
    }

    // If the result for n is already computed, return it
    if (dp[n] != -1) {
        return dp[n];
    }

    int ans = 0;
    // Iterate through all possible roots (from 1 to n) and calculate the number of unique BSTs
    for (int i = 1; i <= n; i++) {

        // The number of BSTs for a given root is the product of BSTs on its left and right subtrees
        ans += solve(i - 1) * solve(n - i);
    }

    // Memoize the result for n and return
    return dp[n] = ans;
}

int numTrees(int n) {
    // Initialize the dp array with -1
    memset(dp, -1, sizeof(dp));
    // Call the solve function to calculate the number of unique BSTs
    return solve(n);
}

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    int result = numTrees(n);
    cout << "Output: " << result << endl;

    return 0;
}