#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int sum = 0;
    int maxSum = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = maxSubarraySum(arr, n);
    cout << "Result: " << ans << endl;

    return 0;
}
