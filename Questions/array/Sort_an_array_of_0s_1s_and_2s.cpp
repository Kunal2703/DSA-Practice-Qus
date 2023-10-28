#include<iostream>
using namespace std;

void sort012(int arr[], int n) {

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if(arr[mid] == 1) {
            mid++;
        }
        //for -> arr[mid] == 2
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout <<  arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {0,1,1,0,1,2,1,2,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort012(arr, n);
    print(arr, n);

    return 0;
}