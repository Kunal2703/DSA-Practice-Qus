//---576. Out of Boundary Paths---

// Example 1:
// Input: m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0
// Output: 6

// Example 2:
// Input: m = 1, n = 3, maxMove = 3, startRow = 0, startColumn = 1
// Output: 12



#include <iostream>
using namespace std;

// Define a constant for modulo operation
int MOD = 1e9 + 7;

// Define a 3D array for memoization
int dp[51][51][51];

// Recursive function to calculate the number of paths
int solve(int m, int n, int maxMove, int startRow, int startColumn) {
    // Base case: if the ball is out of the grid, return 1 path
    if (startRow < 0 || startRow >= m || startColumn < 0 || startColumn >= n) {
        return 1;
    }

    // Base case: if no more moves are allowed, return 0 path
    if (maxMove <= 0) {
        return 0;
    }

    // Check if the result for the current state is already calculated
    if (dp[maxMove][startRow][startColumn] != -1) {
        return dp[maxMove][startRow][startColumn];
    }

    // Recursive calls for four possible directions
    int up = solve(m, n, maxMove - 1, startRow - 1, startColumn);
    int down = solve(m, n, maxMove - 1, startRow + 1, startColumn);
    int left = solve(m, n, maxMove - 1, startRow, startColumn - 1);
    int right = solve(m, n, maxMove - 1, startRow, startColumn + 1);

    // Calculate total paths and store in memoization array
    return dp[maxMove][startRow][startColumn] = ((up + down) % MOD + (left + right) % MOD) % MOD;
}

int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    // Initialize the memoization array with -1
    memset(dp, -1, sizeof(dp));
    // Call the recursive function to find paths
    return solve(m, n, maxMove, startRow, startColumn);
}

int main() {
    int m;
    cout << "m: ";
    cin >> m;

    int n;
    cout << "n: ";
    cin >> n;

    int maxMove;
    cout << "maxMove: ";
    cin >> maxMove;

    int startRow;
    cout << "startRow: ";
    cin >> startRow;

    int startColumn;
    cout << "startColumn: ";
    cin >> startColumn;

    int result = findPaths(m, n, maxMove, startRow, startColumn);
    cout << "Output: " << result << endl;

    return 0;
}