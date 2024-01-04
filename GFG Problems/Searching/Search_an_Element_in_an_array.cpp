//Given an integer array and another integer element. 
//The task is to find if the given element is present in array or not.

// Input:
// n = 4
// arr[] = {1,2,3,4}
// x = 3
// Output: 2
// Explanation: There is one test case 
// with array as {1, 2, 3 4} and element 
// to be searched as 3.  Since 3 is 
// present at index 2, output is 2.
// Example 2:

// Input:
// n = 5
// arr[] = {1,2,3,4,5}
// x = 5
// Output: 4
// Explanation: For array elements 
// {1,2,3,4,5} element to be searched 
// is 5 and it is at index 4. So, the 
// output is 4.

#include<iostream>
using namespace std;

int search(int arr[], int N, int X) {

    for(int i = 0; i < N; i++) {
        if(arr[i] == X) {
            return i;
        }
    }
    return -1;
};

int main() {

    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int x = 3;

    int result = search(arr, n, x);

    cout << "Output: " << result << endl;
    return 0;
}

