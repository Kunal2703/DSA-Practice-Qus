//Rotate the matrix by 90 degree in clockwise direction

#include<iostream>
using namespace std;

#define N 4

void rotateMatrix(int arr[N][N]) {
    for(int i = 0; i < N/2; i++) {
        for(int j = i; j < N-i-1; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[N-i-1][i];
            arr[N-1-j][i] = arr[N-1-i][N-1-j];
            arr[N-1-i][N-1-j] = arr[j][N-1-i];
            arr[j][N-1-i] = temp;
        }
    }
}
void printMatrix(int arr[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int arr[N][N] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {12,13,14,15} };
    rotateMatrix(arr);
    printMatrix(arr);
    return 0;
    
}