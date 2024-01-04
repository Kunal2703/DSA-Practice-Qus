//You are given an array arr(0-based index). 
//The size of the array is given by sizeOfArray. 
//You need to insert an element at given index.

// Example 1:
// Input:
// sizeOfArray = 6
// arr[] = {1, 2, 3, 4, 5}
// index = 5, element = 90
// Output: 1 2 3 4 5 90
// Explanation: 90 is inserted at index 5(0-based indexing). After inserting, array elements are like
// 1, 2, 3, 4, 5, 90.

// Example 2:
// Input:
// sizeOfArray = 6
// arr[] = {1, 2, 3, 4, 5}
// index = 2, element = 90
// Output: 1 2 90 3 4 5
// Explanation: 90 is inserted at index 2(0-based indexing). After inserting, array elements are like 
// 1, 2, 90, 3, 4, 5.

#include<iostream>
using namespace std;

void insertAtIndex(int arr[], int sizeOfArray, int index, int element) {

    for(int i = sizeOfArray - 1; i >= index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = element;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int index = 2;
    int element = 90;
    int sizeOfArray = 6;

    insertAtIndex(arr, sizeOfArray, index, element);

    cout << "Output: ";
    for(int i = 0; i < sizeOfArray; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}