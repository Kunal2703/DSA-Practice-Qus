#include<iostream>
using namespace std;

int kthLargestElement(vector<int> arr, int size, int k) {
    sort(arr.begin(), arr.end());
    return arr[size-k];

}
int kthSmallestElement(vector<int> arr, int size, int k) {
    sort(arr.begin(), arr.end());
    return arr[k-1];
}


int main() {

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(8);
    arr.push_back(6);
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 2;
    int res1 = kthLargestElement(arr, n, k);
    cout << "Kth largest element is: " << res1 << endl;

    int res2 = kthSmallestElement(arr, n, k);
    cout << "Kth smallest element is: " << res2 << endl;

    return 0;
}