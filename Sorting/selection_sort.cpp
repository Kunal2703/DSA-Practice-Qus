#include<iostream>
using namespace std;

void selectSort(int arr[], int n) {
    for(int i  =0; i < n-1; i++) {
        int min_ind = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        swap(arr[min_ind], arr[i]);
    }
}
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2,5,8,20,10,18};
    int N = sizeof(arr)/sizeof(arr[0]);
    selectSort(arr, N);
    cout << "sorted Array is: ";
    printArray(arr, N);
    return 0;
}