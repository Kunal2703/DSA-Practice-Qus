//----1662. Check If Two String Arrays are Equivalent----

// Example 1:
// Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
// Output: true
// Explanation:
// word1 represents string "ab" + "c" -> "abc"
// word2 represents string "a" + "bc" -> "abc"
// The strings are the same, so return true.

// Example 2:
// Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
// Output: false

// Example 3:
// Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
// Output: true

#include<iostream>
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2) {
    string s1 = "";
    string s2 = "";

    for(string &s : word1) {
        s1 += s;
    }

    for(string &s : word2) {
        s2 += s;
    }

    if(s1 == s2) {
        return true;
    }
    else {
        return false;
    }

};

int main() {
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    cout << "Output: ";
    bool result = arrayStringsAreEqual(word1, word2);

    if(result) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}