#include<iostream>
using namespace std;

vector<vector<int> > zeroMatrix(vector<vector<int> > &matrix, int n, int m) {

    // Create vectors to track which rows and columns contain zeros
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    // Iterate through the matrix to mark rows and columns with zeros
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;

            }
        }
    }

    // Iterate through the matrix and set zeros based on marked rows and columns
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
};

int main() {

    // Initialize the matrix
    vector<vector<int> > matrix;

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

    // Get the size of the matrix
    int n = matrix.size();
    int m = matrix[0].size();

    // Call the zeroMatrix function to set zeros
    matrix = zeroMatrix(matrix, n, m);

    // Display the result
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}