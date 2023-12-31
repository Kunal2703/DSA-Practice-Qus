#include<iostream>
using namespace std;

int maxLengthBetweenEqualCharacters(string s) {
    
    //Brute Force
    // int n = s.length();
    // int result = -1;

    // for(int i = 0; i < n-1; i++) {
    //     for(int j = i+1; j < n; j++) {
    //         if(s[i] == s[j]) {
    //             result = max(result, j-i-1);
    //         }
    //     }
    // }
    // return result;

    //using Map
    int n = s.length();
    unordered_map<char, int> mp;
    int result = -1;

    for(int i = 0; i < n; i++) {
        char ch = s[i];
        if(mp.find(ch) == mp.end()) {
            mp[ch] = i;
        }
        else {
            result = max(result, i-mp[ch]-1);
        }
    }
    return result;
}

int main() {

    string s = "abca";
    int result = maxLengthBetweenEqualCharacters(s);

    cout << "Output: " << result << endl;

    return 0;
}