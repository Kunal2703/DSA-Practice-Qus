#include<iostream>
using namespace std;

void getMaxMin(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min= arr[i];
        }
    }
    cout << "Maximum: " << max << endl;
    cout << " Minimum: " << min << endl;
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3,5,1,6,8,2,4,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    print(arr, size);
    getMaxMin(arr, size);

    return 0;
}