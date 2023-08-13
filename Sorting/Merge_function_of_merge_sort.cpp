#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int len1 = mid-low+1;
    int len2 = high-mid;

    int left[len1];
    int right[len2];

    for(int i = 0; i < len1; i++) {
        left[i] = arr[low+i];
    }
    for(int j = 0; j < len2; j++) {
        right[j] = arr[j+mid+1];
    }

    int i = 0; 
    int j = 0;
    int k = low;

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

int main() {
	
    int arr[9]={10,15,20,40,8,11,15,22,25};
    int n = 9;
    int mid = 3;
    merge(arr,0,mid,n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}