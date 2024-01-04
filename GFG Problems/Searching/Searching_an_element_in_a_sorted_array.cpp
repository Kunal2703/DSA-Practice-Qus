//Given an array arr[] sorted in ascending order of size N and an integer K. 
//Check if K is present in the array or not.

// Example 1:
// Input:
// N = 5, K = 6
// arr[] = {1,2,3,4,6}
// Output: 1
// Exlpanation: Since, 6 is present in 
// the array at index 4 (0-based indexing),
// output is 1.
 

// Example 2:
// Input:
// N = 5, K = 2
// arr[] = {1,3,4,5,6}
// Output: -1
// Exlpanation: Since, 2 is not present 
// in the array, output is -1.

#include<iostream>
using namespace std;

int searchInSorted(int arr[], int N, int K) {
    for(int i = 0; i < N; i++) {
        if(arr[i] == K) {
            return 1;
        }
    }
    return -1;
};

int main() {
    int arr[] = {1,2,3,4,6};
    int n = 5;
    int k = 4;

    int result = searchInSorted(arr, n, k);
    cout << "Output: " << result << endl;

    return 0;
}