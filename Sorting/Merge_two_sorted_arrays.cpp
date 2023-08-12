#include<iostream>
using namespace std;

void mergeTwoSortedArray(int a[], int b[], int m, int n) {
    int c[m+n];

    for(int i = 0; i < m; i++) {
        c[i] = a[i];
    }
    for(int j = 0; j < n; j++) {
        c[j+m] = b[j];
    }
    sort(c, c+m+n);

    for(int i =0; i < m+n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {10,20,50};
    int b[] = {5, 50,50};

    int M = sizeof(a)/sizeof(a[0]);
    int N = sizeof(b)/sizeof(b[0]);

    mergeTwoSortedArray(a,b,M,N);

    return 0;
}