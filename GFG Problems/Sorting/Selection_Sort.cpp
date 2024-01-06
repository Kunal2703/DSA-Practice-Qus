// Given an unsorted array of size N, use selection sort to sort arr[] in increasing order.

// Example 1:
// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}
// Output:
// 1 3 4 7 9
// Explanation:
// Maintain sorted (in bold) and unsorted subarrays.
// Select 1. Array becomes 1 4 3 9 7.
// Select 3. Array becomes 1 3 4 9 7.
// Select 4. Array becomes 1 3 4 9 7.
// Select 7. Array becomes 1 3 4 7 9.
// Select 9. Array becomes 1 3 4 7 9.

// Example 2:
// Input:
// N = 10
// arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output:
// 1 2 3 4 5 6 7 8 9 10

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;

    selectionSort(arr, n);
    
    cout << "Output: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}