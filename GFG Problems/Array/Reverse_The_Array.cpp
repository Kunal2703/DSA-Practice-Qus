//Given an array arr of size n. You need to reverse the array.

// Example 1:
// Input:
// n = 5
// arr[] = {1 1 2 2 3}
// Output: 3 2 2 1 1

// Example 2:
// Input:
// n = 2
// arr[] = {4 2}
// Output: 2 4

#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {

    int arr[] = {1, 1, 2, 2, 3};
    int n = 5;
    reverseArray(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}