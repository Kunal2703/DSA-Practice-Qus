//Check if a String is Subsequence of Other
#include<iostream>
using namespace std;

bool isSubsequence(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();

    if(n < m) {
        return false;
    }
    int j = 0;
    for(int i = 0; i < n && j < m; i++) {
        if(s1[i] == s2[j]) {
            j++;
        }
    }
    return(j == m);
}

int main() {
    string s1, s2;
    cout <<"Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    if(isSubsequence(s1, s2)) {
        cout <<"String is Subsequence" << endl;
    }
    else {
        cout <<"String is not a Subsequence" << endl;
    }
    return 0;
}