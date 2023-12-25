#include<iostream>
using namespace std;

vector<int> dp(101, -1);
int n = 0;
int numDecodingsRecursive(string s, int pos) {
    //base condition
    if(pos == n) {
        return 1;
    }
    if(s[pos] == '0') {
        return 0;
    }

    if(dp[pos] != -1) {
        return dp[pos];
    }

    int count = numDecodingsRecursive(s, pos+1);

    if(pos < n-1 && s.substr(pos, 2) < "27") {
        count += numDecodingsRecursive(s, pos+2);
    }
    return count;
}

int numDecodings(string s) {
    n = s.size();

    for(int i = 0; i < 101; i++) {
        dp[i] = -1;
    }
    return numDecodingsRecursive(s, 0);
}

int main() {

    //string s = "06";
    //string s = "12";
    string s = "226";
    int result = numDecodings(s);
    cout << result << endl;
    return 0;
}