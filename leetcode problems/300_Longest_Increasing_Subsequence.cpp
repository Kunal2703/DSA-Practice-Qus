#include <iostream>
using namespace std;

// 2D array to store the intermediate results for dynamic programming
int dp[2501][2501];
// Variable to store the size of the input array
int n;

// Recursive function to find the length of the longest increasing subsequence
int solve(vector<int> &nums, int i, int prevElement) {

    // Base case: If we have reached the end of the array, return 0
    if (i >= n) {
        return 0;
    }

    // Check if the result for the current state has already been calculated
    if (prevElement != -1 && dp[i][prevElement] != -1) {
        return dp[i][prevElement];
    }

    // Initialize take variable to 0
    int take = 0;

    // Check if it's valid to include the current element in the subsequence
    if (prevElement == -1 || nums[i] > nums[prevElement]) {
        // If valid, calculate the length by including the current element
        take = 1 + solve(nums, i + 1, i);
    }

    // Calculate the length by excluding the current element
    int skip = solve(nums, i + 1, prevElement);

    // Store the result in the dp array
    if (prevElement != -1) {
        dp[i][prevElement] = max(take, skip);
    }

    // Return the maximum length
    return max(take, skip);
}

int lengthOfLIS(vector<int> &nums) {

    // Initialize the size of the array
    n = nums.size();

    // for(int i = 0; i < 2501; i++) {
    //     for(int j = 0; j < 2501; j++){
    //         dp[i][j] = -1;
    //     }
    // }

                // OR

    // Initialize the dp array with -1
    memset(dp, -1, sizeof(dp));

    // Call the recursive function to find the length of the LIS
    return solve(nums, 0, -1);
}

int main() {
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(9);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(7);
    nums.push_back(101);
    nums.push_back(18);

    int result = lengthOfLIS(nums);

    cout << "Output: " << result << endl;
    return 0;
}
