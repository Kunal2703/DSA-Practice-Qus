// The task is to complete the insert() function which is used to implement Insertion Sort.

// Example 1:
// Input:
// N = 5
// arr[] = { 4, 1, 3, 9, 7}
// Output: 1 3 4 7 9

// Example 2:
// Input:
// N = 10
// arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
};

int main() {
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;

    cout << "Output: ";
    insertionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}