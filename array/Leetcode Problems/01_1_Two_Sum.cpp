// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]

#include<iostream>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)  {
//Approach 1 -> O(n^2)

    // int n = nums.size();
    // for(int i = 0; i< n; i++) {
    //     for(int j = i+1; j < n; j++) {
    //         if(nums[i] + nums[j] == target) {
    //             return {i, j};
    //         }
    //     }
    // }
    // return {};


//Approach 2 -> O(n)

    int n = nums.size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int remaining = target - nums[i];

        if(mp.find(remaining) != mp.end()) {
            return {mp[remaining], i};
        }
        mp[nums[i]] = i;
    }
    return {};
};

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target = 9;

    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]"  << endl;
    return 0;
}
