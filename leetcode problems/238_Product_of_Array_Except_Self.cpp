//238. Product of Array Except Self

// Given an integer array nums, return an array answer such that answer[i] is equal to 
// the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#include <iostream>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums)  {
    int n = nums.size();
    vector<int> lp(n);
    vector<int> rp(n);
    vector<int> ans(n);

    lp[0] = 1;
    for(int i = 1; i < n; i++) {
        lp[i] = lp[i-1] * nums[i-1];
    }

    rp[n-1] = 1;
    for(int i = n-2; i >= 0; i--) {
        rp[i] = rp[i+1] * nums[i+1];
    }

    for(int i = 0; i < n; i++){
        ans[i] = lp[i] * rp[i];
    }
    return ans;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    cout << "Output: ";
    vector<int> res = productExceptSelf(nums);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}