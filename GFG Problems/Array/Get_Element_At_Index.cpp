//You are given an array arr(0-based indexing). 
//The size of the array is given by n. 
//You need to get the element at index i and return it. 
//If no element exists at i then return -1.

// Example 1:
// Input:
// n = 6
// arr[] = {1 2 3 4 5 6}
// index = 0
// Output: 1
// Explanation: The array is {1 2 3 4 5 6}. The index given is 0. so element at 0th index is 1.

// Example 2:
// Input:
// n = 4
// arr[] = {1 2 3 4}
// index = 4
// Output: -1
// Explanation: The array is {1 2 3 4}. The index given is 4. 
//Here no element exists at the 4th index, so the answer is -1.

#include<iostream>
using namespace std;

int getByIndex(int arr[], int n, int i) {
    if(i > n-1) {
        return -1;
    }
    else {
        return arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int index = 5;

    cout << "Output: " << getByIndex(arr, n, index) << endl;
    return 0;
}
