#include <iostream>
using namespace std;

// Array to store dynamic programming results
int dp[101];

// Recursive function to solve the problem using dynamic programming
int solve(vector<int> &nums, int i, int n) {

    // Base case: If the index i exceeds the size of the array, return 0
    if (i >= n) {
        return 0;
    }

    // Check if the result for the current subproblem is already calculated
    if (dp[i] != -1) {
        return dp[i];
    }

    // Calculate the maximum amount of money that can be robbed either by robbing
    // the current house or skipping it
    int rob_house = nums[i] + solve(nums, i + 2, n);
    int skip_house = solve(nums, i + 1, n);

    // Update the result for the current subproblem in the dynamic programming array
    return dp[i] = max(rob_house, skip_house);
}

int rob(vector<int> &nums) {
    // Get the size of the input array
    int n = nums.size();

    // Initialize the dynamic programming array with -1 to mark uncalculated results
    memset(dp, -1, sizeof(dp));

    // Call the recursive function to find the maximum amount of money that can be robbed
    return solve(nums, 0, n);
}

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(3);
    nums.push_back(1);

    int result = rob(nums);

    cout << "Output: " << result << endl;

    return 0;
}




//Question -> 198. House Robber

// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.

// Example 2:
// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.
 
// Constraints:=
// 1 <= nums.length <= 100
// 0 <= nums[i] <= 400