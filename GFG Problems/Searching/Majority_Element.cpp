//Given an array A of N elements. 
//Find the majority element in the array. 
//A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.

// Example 1:
// Input:
// N = 3 
// A[] = {1,2,3} 
// Output: -1
// Explanation: Since, each element in {1,2,3} appears only once so there is no majority element.

// Example 2:
// Input:
// N = 5 
// A[] = {3,1,3,3,2} 
// Output: 3
// Explanation: Since, 3 is present more than N/2 times, so it is the majority element.

#include<iostream>
using namespace std;

int majorityElement(int arr[], int size) {
    unordered_map<int, int> mp;

    for(int i = 0; i < size; i++) {
        mp[arr[i]]++;
    }
    for(int i = 0; i < mp.size(); i++) {
        if(mp[i] > (size/2)) {
            return i;
        }
    }
    return -1;
};

int main() {
    int arr[] = {3,1,3,3,2};
    int n = 5;

    int result = majorityElement(arr, n);
    cout << "Output: " << result << endl;
    return 0;
}