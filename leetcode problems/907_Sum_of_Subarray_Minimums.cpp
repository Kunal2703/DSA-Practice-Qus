// Example 1:
// Input: arr = [3,1,2,4]
// Output: 17
// Explanation: 
// Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
// Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
// Sum is 17.

// Example 2:
// Input: arr = [11,81,94,43,3]
// Output: 444

#include<iostream>
using namespace std;

int sumSubArrayMins(vector<int> &arr) {
    int n = arr.size();
    long result = 0;

    for(int i = 0; i < n; i++) {
        int minVal = arr[i];

        for(int j = i; j < n; j++) {
            minVal = min(minVal, arr[j]);
            result = (result + minVal);
        }
    }
    return result;
}

int main() {
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);

    int ans = sumSubArrayMins(arr);
    cout << "Output: " << ans << endl;
    return 0;
}