//arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
//target = 23
//Output = 5

#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while(l <= r) {
        int mid = l + (r - l)/2;

        // if x is present at mid return mid
        if(arr[mid] == x) {
            return mid;
        }
        // If x greater, ignore left half
        if(arr[mid] < x) {
            l = mid + 1;
        }
        // If x is smaller, ignore right half
        else {
            r = mid - 1;
        }
    }
    return -1;
};

int main() {

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int x = 23;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr, 0, n-1, x);
    if(result == -1) {
        cout << "Element is not present in array";
    }
    else {
        cout << "Element is present in array: " << result << endl;
    }
    return 0;
}