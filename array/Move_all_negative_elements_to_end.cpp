/*
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5
*/

#include<iostream>
using namespace std;

void segregateElements(int arr[], int n) {
    vector<int> temp;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[8] = {-5, 7, -3, -4, 9, 10, -1, 11};

    int n = 8;

    segregateElements(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}