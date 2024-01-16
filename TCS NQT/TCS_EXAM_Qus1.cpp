#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j= 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <n; j++) {
            cout << arr[i][j];
            if(j < n-1) {
                cout << " ";
            }
        }
        if(i < n-1) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}