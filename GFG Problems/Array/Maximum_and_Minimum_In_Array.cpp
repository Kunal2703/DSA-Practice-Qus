//Given an array arr of size n, find maximum and minimum elements in the array.

// Example 1:
// Input:
// N = 4
// arr[] = {5 4 2 1}
// Output: 5 1

// Example 2:
// Input:
// N = 1
// arr[] = {8}
// Output: 8

#include<iostream>
using namespace std;

int maximumElement(int arr[], int n) {
    sort(arr, arr+n);
    return arr[n-1];
}

int minimumElement(int arr[], int n) {
    sort(arr, arr+n);
    return arr[0];
}

int main() {
    int arr[] = {5, 4, 2, 1};
    int n = 4;

    int result1 = maximumElement(arr, n);
    int result2 = minimumElement(arr, n);
    cout << "Max Element: "<< result1 << endl;
    cout << "Min Element: "<< result2 << endl;

    return 0;


}


