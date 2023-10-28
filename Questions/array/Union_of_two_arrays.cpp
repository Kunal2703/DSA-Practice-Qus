#include<iostream>
#include<set>
#include<vector>
using namespace std;

int doUnion(int arr1[], int arr2[], int n, int m) {
    set<int> ans;

    for(int i = 0; i < n; i++) {
        ans.insert(arr1[i]);
    }

    for(int i = 0; i < m; i++) {
        ans.insert(arr2[i]);
    }


    return ans.size();
}

//Extra
vector<int> doCombine(int arr1[], int arr2[], int n, int m) {
    vector<int> v;

    for(int i = 0 ; i < n; i++) {
        v.push_back(arr1[i]);
    }
    for(int i = 0 ; i < m; i++) {
        v.push_back(arr2[i]);
    }
    return v;
}

int main() {
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,6,9,4};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Element of the 1st array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Element of the 2nd array is: ";
    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    int result = doUnion(arr1, arr2, n , m);
    cout << "Size of the union array: " << result << endl;


    vector<int> combine = doCombine(arr1, arr2, n, m);
    cout << "Combine array is: ";
    for(int i = 0; i < combine.size(); i++) {
        cout << combine[i] << " ";
    }
    cout << endl;

    return 0;
}