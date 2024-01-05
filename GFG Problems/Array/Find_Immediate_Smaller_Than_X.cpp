// Example 1:
// Input:
// N = 5
// arr[] = {4 67 13 12 15}
// X = 16
// Output: 15
// Explanation: For a given value 16, there are four values which are smaller than it. 
// But 15 is the number which is smaller and closest to it with minimum difference of 1.

// Example 2:
// Input:
// N = 5
// arr[] = {1 2 3 4 5}
// X = 1
// Output: -1
// Explanation: No value is smaller than 1.

#include<iostream>
using namespace std;

int immediateSmaller(int arr[], int n, int x) {
    sort(arr, arr+n);
    
    int ans = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] < x) {
            ans  = arr[i];
        }
    }
    return ans;
}

int main() {
    int arr[] = {4, 67, 13, 12, 15};
    int n = 5;
    int x = 16;

    int result = immediateSmaller(arr, n, x);
    cout << "Output: " << result << endl;
    return 0;
}