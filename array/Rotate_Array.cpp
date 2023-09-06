//Rotate Array
#include<iostream>
#include<vector>

using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> temp(n);

    for(int i = 0; i<n; i++) {
        temp[(i+k) % n] = nums[i];
    }
    nums = temp;
}

int main() {
    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr, arr+n);

    rotateArray(nums, k);
    for(int i =0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;



}