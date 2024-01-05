// Example 1:
// Input:
// N = 11
// arr[] = {1,1,2,2,3,3,4,4,4,4,5}
// x = 4, y = 5
// Output: 4
// Explanation:  frequency of 4 is 4. frequency of 5 is 1.
 
// Example 2:
// Input:
// N = 8
// arr[] = {1,2,3,4,5,6,7,8}
// x = 1, y = 7
// Output: 1
// Explanation:  frequency of 1 is 1. frequency of 7 is 1. Since 1 < 7, return 1.

#include<iostream>
using namespace std;

int majorityWins(int arr[], int n, int x, int y) {

    int countX = 0;
    int countY = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            countX++;
        }
        else if(arr[i] == y) {
            countY++;
        }
    }

    if(countX > countY) {
        return x;
    }
    else if(countX < countY) {
        return y;
    }
    else {
        return min(x, y);
    }
};

int main() {
    int arr[] = {1,1,2,2,3,3,4,4,4,4,5};
    int n = 11;
    int x = 4;
    int y = 5;

    int result = majorityWins(arr, n, x, y);
    cout << "Output: " << result << endl;
    return 0;
}