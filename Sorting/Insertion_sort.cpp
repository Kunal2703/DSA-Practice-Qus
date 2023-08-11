#include<iostream>
using namespace std;

void insertSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4,3,2,10,12,1,5,6};
    int N = sizeof(arr)/sizeof(arr[0]);
    insertSort(arr,N);
    cout << "sorted array is: ";
    printArray(arr, N);
    return 0;
}