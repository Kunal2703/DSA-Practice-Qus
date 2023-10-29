#include<iostream>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr+n);
    int ans = arr[n-1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n-1] + k;

    int minimum, maximum;

    for(int i = 1; i < n-1; i++) {
        if(arr[i] >= k) {
            maximum = max(arr[i-1]+k, arr[n-1]-k);
            minimum = min(arr[0]+k, arr[i]-k);

            ans = min(ans, maximum-minimum);
        }
    }
    return ans;

}

int main() {
    int arr[] = {3, 9, 12, 16, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    cout << "The difference between the largest and the smallest is: "<< getMinDiff(arr, n, k);
    cout << endl;
    return 0;
}