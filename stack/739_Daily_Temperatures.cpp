//---739. Daily Temperatures---

// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to wait 
// after the ith day to get a warmer temperature. If there is no future day for which 
// this is possible, keep answer[i] == 0 instead.

 
// Example 1:
// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]

// Example 2:
// Input: temperatures = [30,40,50,60]
// Output: [1,1,1,0]

// Example 3:
// Input: temperatures = [30,60,90]
// Output: [1,1,0]
 

#include<iostream>
#include<stack>
using namespace std;

//--Brute Force Solution -> O(n^2)---
// vector<int> dailyTemperatures(vector<int> temperatures) {
//     int n = temperatures.size();
//     vector<int> ans(n, 0);

//     for(int i = 0; i < n-1; i++) {
//         int j = i+1;

//         while(j < n && temperatures[j] <= temperatures[i]) {
//             j++;
//         }

//         if(j < n) {
//             ans[i] = j-i;
//         }
//     }
//     return ans;
// }

//---Optimal Using Stack O(n)---
vector<int> dailyTemperatures(vector<int> temperatures) {
    int n = temperatures.size();
    // Initialize the result array
    vector<int> ans(n, 0);
    // Stack to keep track of indices of temperatures
    stack<int> st;

    // Iterate through temperatures in reverse order
    for(int i = n-1; i>= 0; i--) {
        // Pop elements from the stack while the current temperature is greater or equal
        // This ensures that we find the first warmer temperature
        while(!st.empty() && temperatures[i] >= temperatures[st.top()]) {
            st.pop();
        }

        // If the stack is empty, there is no warmer temperature in the future
        if(st.empty()) {
            ans[i] = 0;
        }
        else {
            // Calculate the number of days to wait for a warmer temperature
            ans[i] = st.top() - i;
        }
        // Push the current index onto the stack
        st.push(i);
    }
    // Return the final result array
    return ans;
};

int main() {
    vector<int> ans;
    ans.push_back(73);
    ans.push_back(74);
    ans.push_back(75);
    ans.push_back(71);
    ans.push_back(69);
    ans.push_back(72);
    ans.push_back(76);
    ans.push_back(73);

    vector<int> result = dailyTemperatures(ans);
    cout << "Output: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}