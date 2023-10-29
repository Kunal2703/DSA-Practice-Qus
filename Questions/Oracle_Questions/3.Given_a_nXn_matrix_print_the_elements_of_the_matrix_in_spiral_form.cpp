//Given a n*n matrix print the elements of the matrix in spiral form.

#include<iostream>
using namespace std;

#define row 6
#define col 6

void printSprialOrder(int mat[row][col], int m, int n) {
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;

    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }cout << endl;
        top = top + 1;

        for(int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }cout << endl;
        right = right - 1;

        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }cout << endl;
            bottom = bottom - 1;
        }

        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }cout << endl;
            left = left + 1;
        }
    }   
}

int main() {

    int mat[row][col] = {{1,2,3,4,5,6},
                        {20,21,22,23,24,7}, 
                        {19,32,33,34,25,8}, 
                        {18,31,36,35,26,9}, 
                        {17,30,29,28,27,10}, 
                        {16,15,14,13,12,11}};

    printSprialOrder(mat, row, col);


    return 0;
}