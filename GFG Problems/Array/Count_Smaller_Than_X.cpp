// Example 1:
// Input:
// N = 5
// arr[] = {4 5 3 1 2}
// X = 3
// Output: 2
// Explanation: Here X = 3, and elements that are smaller than X are 1 and 2.

// Example 2:
// Input:
// N = 6
// arr[] = {2 2 2 2 2 2}
// X = 3
// Output: 6
// Explanation: Here X = 3, and elements that are smaller than X are 2 2 2 2 2 2.

#include<iostream>
using namespace std;

int smallerThanX(int arr[], int n, int x) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < x){
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] =  {4, 5, 3, 1, 2};
    int n = 5;
    int x = 3;

    int result = smallerThanX(arr,n, x);
    cout << "Output: " << result << endl;
    return 0;
}