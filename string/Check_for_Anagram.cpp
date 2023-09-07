//Check for Anagram
#include<iostream>
using namespace std;

bool IsAnagram(string &s1, string &s2) {
    if(s1.length() != s2.length()) {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return(s1 == s2);
}

int main() {
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    if(IsAnagram(s1, s2)) {
        cout << "The two strings are anagram of each other" << endl;
    }
    else {
        cout << "The two strings are not anagram of each other" << endl;
    }
    return 0;
}