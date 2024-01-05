// Example 1:
// Input:
// N = 5
// arr[] = {4 67 13 12 15}
// X = 16
// Output: 67
// Explanation: For a given value 16, there is only one value 67 that greater than it and 
// so it is the answer.

// Example 2:
// Input:
// N = 5
// arr[] = {1 2 3 4 5}
// X = 1
// Output: 2
// Explanation: For a given value 1, there are 4 values greater than it 2 3 4 5. 
// But 2 is closest to 1 so it is the answer

#include<iostream>
using namespace std;

int immediateGreater(int arr[], int n, int x) {

    sort(arr, arr+n);

    for(int i = 0; i < n; i++) {
        if(arr[i] > x) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 67, 13, 12, 15};
    int n = 5;
    int x = 13;

    int result = immediateGreater(arr, n, x);
    cout << "Output: " << result << endl;
    return 0;
}