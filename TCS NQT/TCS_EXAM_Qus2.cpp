#include<iostream>
using namespace std;

void arrangeString(string &inputString) {
    int S = inputString.size();

    int sqrt_S = sqrt(S);

    int row = floor(sqrt_S);
    int col = ceil(sqrt_S);

    while(row * col < S) {
        col++;
    }

    char arr[row][col];

    int index = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(index < S) {
                arr[i][j] = inputString[index];
                index++;
            }
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j];
        }
        cout << ' ';
    }
    cout << endl;
};

int main() {
    string inputString;
    cin >> inputString;

    arrangeString(inputString);
    return 0;
}