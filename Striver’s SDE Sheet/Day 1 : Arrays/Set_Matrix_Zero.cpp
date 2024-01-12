#include<iostream>
using namespace std;

// Function to mark a row with -1 if there's a 0 in that row
void markRow(vector<vector<int> > &matrix, int n, int m, int i) {
    for(int j = 0; j < m; j++) {
        if(matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

// Function to mark a column with -1 if there's a 0 in that column
void markCol(vector<vector<int> > &matrix, int n, int m, int j) {
    for(int i = 0; i < n; i++) {
        if(matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int> > setZeroes(vector<vector<int> > &matrix, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                markRow(matrix, m, n, i);
                markCol(matrix, m, n, j);
            }
        }
    }

    // Replace -1 with 0 in the marked positions
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main() {
    // Initialize the matrix
    vector<vector<int> > matrix;
    // Assign values to the matrix row by row
 
    matrix.resize(3, vector<int>(3, 0));
    matrix[0][0] = 1;
    matrix[0][1] = 1;
    matrix[0][2] = 1;

    matrix[1][0] = 1;
    matrix[1][1] = 0;
    matrix[1][2] = 1;

    matrix[2][0] = 1;
    matrix[2][1] = 1;
    matrix[2][2] = 1;


    int n = matrix.size();
    int m = matrix[0].size();

    // Call the function to set zeroes
    matrix = setZeroes(matrix, n, m);

    // Display the result
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}