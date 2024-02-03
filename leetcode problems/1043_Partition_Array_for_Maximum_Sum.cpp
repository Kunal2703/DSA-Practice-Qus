//--1043. Partition Array for Maximum Sum--

// Given an integer array arr, partition the array into (contiguous) subarrays of length
// at most k. After partitioning, each subarray has their values changed to become the
// maximum value of that subarray.

// Return the largest sum of the given array after partitioning. Test cases are generated
// so that the answer fits in a 32-bit integer.

// Example 1:
// Input: arr = [1,15,7,9,2,5,10], k = 3
// Output: 84
// Explanation: arr becomes [15,15,15,9,10,10,10]

// Example 2:
// Input: arr = [1,4,1,5,7,3,6,1,9,9,3], k = 4
// Output: 83

// Example 3:
// Input: arr = [1], k = 1
// Output: 1

#include <iostream>
using namespace std;

int n;
int dp[501];

int solve(vector<int> &arr, int i, int k) {
    n = arr.size();

    // Base case: if the current index is beyond the array length, return 0
    if (i >= n) {
        return 0;
    }

    // If the result for the current index is already computed, return it
    if (dp[i] != -1) {
        return dp[i];
    }

    int result = 0;
    int curr_max = -1;

    // Iterate over subarrays of length at most k starting from the current index
    for (int j = i; j < n && j - i + 1 <= k; j++) {
        curr_max = max(curr_max, arr[j]);

        // Update the result based on the maximum sum for the current subarray
        result = max(result, ((j - i + 1) * curr_max) + solve(arr, j + 1, k));
    }

    // Memoize the result and return it
    return dp[i] = result;
}

int maxSumAfterPartitioning(vector<int> &arr, int k) {
    n = arr.size();
    memset(dp, -1, sizeof(dp));

    return solve(arr, 0, k);
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(15);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(10);

    int k = 3;

    int ans = maxSumAfterPartitioning(arr, k);
    cout << "Output: " << ans << endl;

    return 0;
}