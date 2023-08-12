#include<iostream>
using namespace std;

void merge(int arr[], int low, int high) {
    int mid = low+(high-low)/2;
    int len1 = mid-low+1;
    int len2 = high-mid;
    
    int left[len1];
    int right[len2];
    
    for(int i=0; i<len1; i++) {
        left[i] = arr[i+low]; 
    }
    for(int j = 0; j < len2; j++) {
        right[j] = arr[j+mid+1];
    }

    int i =0;
    int j =0;
    int k = low; //value copy

    while(i < len1 && j < len2) {
        if(left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }
    
    while(i < len1) {
        arr[k++] = left[i++];
    }
    while(j < len2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int low, int high) {
    if(high > low) {
        int mid = low+(high-low)/2;
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        
        merge(arr,low,high);
    }
}

int main() {
    int arr[7] = {10,15,20,40,8,11,55};
    int n = 7;
    
    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}