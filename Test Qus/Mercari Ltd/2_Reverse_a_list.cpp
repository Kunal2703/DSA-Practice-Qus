// Given an array of integers, reverse the given array in place using an index and loop rather than a built-in function.

// Example

// arr = [1, 3, 2, 4, 5]

// Return the array [5, 4, 2, 3, 1] which is the reverse of the input array.

// Function Description

// Complete the function reverseArray in the editor below.

// reverseArray has the following parameter(s): int arr[n]: an array of integers Return int[n]: the array in reverse order


// Input Format For Custom Testing

// The first line contains an integer, n, the number of elements in arr.

// Each line / of the n subsequent lines (where O<i<n) contains an integer, arr[i].

// Sample Case 0

// Sample Input For Custom Testing
// 5
// 1
// 3
// 2
// 4
// 5
// Sample Output
// 5
// 4
// 2
// 3
// 1
// Explanation

// The input array is [1, 3, 2, 4, 5], so the reverse of the input array is [5, 4, 2, 3, 1].

// Sample Case 1

// Sample Input For Custom Testing
// 4
// 17
// 10
// 21
// 45
// Sample Output
// 45
// 21
// 18
// 17
// Explanation

// The input array is [17, 10, 21, 45], so the reverse of the input array is [45, 21, 10, 17]

#include<iostream>
using namespace std;

vector<int> reverseArray(vector<int> arr) { 
    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }

    vector<int> reversedArr = reverseArray(arr);
    cout << "Output " << endl;
    for(int i = 0; i < n; i++) {
        cout << reversedArr[i] << endl;
    }
    return 0;
}