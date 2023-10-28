#include<iostream>
using namespace std;

void separateNegativeAndPositive(int arr[], int n) {
    vector<int> temp;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            temp.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    separateNegativeAndPositive(arr, n);
    print(arr, n);

    return 0;
}
