//Given a binary sorted non-increasing array of 1s and 0s. 
//You need to print the count of 1s in the binary array.

// Example 1:
// Input:
// N = 8
// arr[] = {1,1,1,1,1,0,0,0}
// Output: 5
// Explanation: Number of 1's in given 
// binary array : 1 1 1 1 1 0 0 0 is 5.

// Example 2:
// Input:
// N = 8
// arr[] = {1,1,0,0,0,0,0,0}
// Output: 2
// Explanation: Number of 1's in given 
// binary array : 1 1 0 0 0 0 0 0 is 2.

#include<iostream>
using namespace std;

int countOnes(int arr[], int N) {
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] == 1) {
            count++;
        }
        else {
            break;
        }
    }
    return count;
}

int main() {
    int arr[] = {1,1,1,1,1,0,0,0};
    int n = 8;

    int result = countOnes(arr, n);
    cout << "Output: "<< result<< endl;
    return 0;
}