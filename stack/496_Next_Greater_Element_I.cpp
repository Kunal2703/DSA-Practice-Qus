//--496. Next Greater Element I--

// Example 1:
// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

// Example 2:
// Input: nums1 = [2,4], nums2 = [1,2,3,4]
// Output: [3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
// - 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.

#include<iostream>
#include<stack>
using namespace std;

vector<int>nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    int n = nums2.size();
    stack<int> st;
    // Map to store the next greater element for each element in nums2
    unordered_map<int, int> mp;

    // Iterate through nums2 in reverse order
    for(int i = n-1; i >= 0; i--) {
        // Pop elements from the stack while they are less than or equal to the current element
        while(!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }

        int ans;
        // If the stack is empty, there is no next greater element
        if(st.empty()) {
            ans = -1;
        }
        else {
            // The next greater element is the top element of the stack
            ans = st.top();
        }

        // Insert the current element and its next greater element into the map
        mp.insert({nums2[i], ans});

        //And Push the current element onto the stack
        st.push(nums2[i]);
    }

    // Create the result vector by looking up the next greater element for each element in nums1
    vector<int> result;
    for(int num : nums1) {
        result.push_back(mp[num]);
    }

    return result;
}

int main() {
    vector<int> nums1;
    nums1.push_back(4);
    nums1.push_back(1);
    nums1.push_back(2);

    vector<int> nums2;
    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(2);

    vector<int> res = nextGreaterElement(nums1, nums2);

    cout << "Output: ";
    for(int num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}