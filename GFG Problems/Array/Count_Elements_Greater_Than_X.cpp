// Example 1:
// Input:
// N = 5
// arr[] = {4 5 3 1 2}
// X = 3
// Output: 2
// Explanation: Here X is 3. The elements greater than X are 4 and 5.

// Example 2:
// Input:
// N = 6
// arr[] = {2 2 2 2 2 2}
// X = 3
// Output: 0
// Explanation: Here X is 3. There are no elements greater than X.

#include<iostream>
using namespace std;

int greaterThanX(int arr[], int n, int x) {
    int count = 0;
    for(int i  = 0; i < n; ++i) {
        if(arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {4, 5, 3, 1, 2};
    int n = 5;
    int x = 3;

    int result = greaterThanX(arr, n, x);
    cout << "Output: " << result << endl;
    return 0;
}