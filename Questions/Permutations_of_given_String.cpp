#include<iostream>
#include<algorithm>
using namespace std;

void permutation(string &str, int l, int r) {
    //base case
    if(l == r) {
        cout << str << endl;
    }
    else {
        for(int i = l; i <= r; i++) {
            //swap
            swap(str[l], str[i]);
            //recursion call
            permutation(str, l+1, r);
            //backtracking
            swap(str[l], str[i]);
        }
    }
}

int main() {
    string str = "abc";
    int n = str.size();
    permutation(str, 0, n-1);
    return 0;
}