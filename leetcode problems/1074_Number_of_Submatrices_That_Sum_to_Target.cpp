//1074. Number of Submatrices That Sum to Target

// Example 1:
// Input: matrix = [[0,1,0],[1,1,1],[0,1,0]], target = 0
// Output: 4
// Explanation: The four 1x1 submatrices that only contain 0.

// Example 2:
// Input: matrix = [[1,-1],[-1,1]], target = 0
// Output: 5
// Explanation: The two 1x2 submatrices, plus the two 2x1 submatrices, plus the 2x2 submatrix.

// Example 3:
// Input: matrix = [[904]], target = 0
// Output: 0

//--Brute Force Appraoch  -> O(m^3 * n^3)
#include<iostream>
#include<vector>
using namespace std;

int numSubmatrixSumTarget(vector<vector<int> > &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int result = 0;

    for(int start_row = 0; start_row < m; start_row++) {
        for(int start_col = 0; start_col < n; start_col++) {

            for(int end_row = start_row; end_row < m; end_row++) {
                for(int end_col = start_col; end_col < n; end_col++) {

                    int sum = 0;
                    for(int i = start_row; i <= end_row; i++) {
                        for(int j = start_col; j <= end_col; j++) {

                            sum += matrix[i][j];
                        }
                    }

                    if(sum == target) {
                        result++;
                    }
                }
            }
        }
    }
    return result;
};

int main() {
    vector<vector<int> > matrix;
    matrix.push_back({0,1,0});
    matrix.push_back({1,1,1});
    matrix.push_back({0,1,0});


    int target = 2;

    int ans = numSubmatrixSumTarget(matrix, target);
    cout << "Output: " << ans << endl;

    return 0;
}
