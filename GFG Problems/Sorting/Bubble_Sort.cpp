//Given an Integer N and a list arr. Sort the array using bubble sort algorithm.
// Example 1:
// Input: 
// N = 5
// arr[] = {4, 1, 3, 9, 7}
// Output: 1 3 4 7 9

// Example 2:
// Input:
// N = 10 
// arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
};

int main() {
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    bubbleSort(arr, n);

    cout << "Output: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}