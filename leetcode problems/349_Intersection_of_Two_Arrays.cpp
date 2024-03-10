// Given two integer arrays nums1 and nums2, return an array of their intersection. 
//Each element in the result must be unique and you may return the result in any order.

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

#include<iostream>
#include<unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<int> ans;
    for(const auto& num : set1) {
        if(set2.find(num) != set1.end()) {
            ans.push_back(num);
        }
    }
    return ans;
}


int main() {
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(2);
    nums1.push_back(1);

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(2);

    vector<int> ans = intersection(nums1, nums2);
    cout << "Output: ";
    for(int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}