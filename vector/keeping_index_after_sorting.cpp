#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSortedWithIndex(int arr[], int n) {
    vector<pair<int, int> >v;
    for(int i = 0; i < n; i++) {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second<< endl;
    }
}
int main() {
    int arr[] = {20, 40, 30, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    printSortedWithIndex(arr, n);
    return 0;
}