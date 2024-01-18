// Input: S = “geeksforgeeks”
// Output:
// e, count = 4
// g, count = 2
// k, count = 2
// s, count = 2

#include<iostream>
using namespace std;

void duplicateChar(string str) {
    unordered_map<char, int> mp;
    for(int i = 0; i < str.length(); i++) {
        mp[str[i]]++;
    }
    for(auto &it : mp) {
        if(it.second > 1) {
            cout << it.first << ", " << "count = " << it.second << endl;
        }
    }
};

int main() {
    string str = "geeksforgeeks";
    duplicateChar(str);

    return 0;
}