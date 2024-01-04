//You are given an array arr. 
// The size of the array is given by sizeOfArray. 
// You need to insert an element at the end.
// Array already have the sizeofarray -1 elements.

// Example 1:
// Input:
// sizeOfArray = 6
// arr[] = {1, 2, 3, 4, 5}
// element = 90
// Output: 1 2 3 4 5 90
// Explanation: After inserting 90 at the end, we have array elements as  1 2 3 4 5 90.

// Example 2:
// Input:
// sizeOfArray = 4
// arr[] = {1, 2, 3}
// element = 50
// Output: 1 2 3 50
// Explanation: After inserting 50 at the  end, we have array elements as 1 2 3 50.

#include<iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray, int element) {
    for(int i = 0; i < sizeOfArray; i++) {
        arr[sizeOfArray - 1] = element;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int element = 90;

    int n = sizeof(arr)/sizeof(arr[0]);
    insertAtEnd(arr, n, element);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}