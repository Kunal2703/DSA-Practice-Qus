#include<iostream>
using namespace std;

bool makeEqual(vector<string> &words) {

    int n = words.size();

    unordered_map<char, int> mp;

    for(string &word: words) {
        for(char &ch: word) {
            mp[ch]++;
        }
    }
    for(auto &it: mp) {
        int freq = it.second;

        if(freq % n != 0) {
            return false;
        } 
    }
    return true;
}

int main() {

    vector<string> words;
    words.push_back("abc");
    words.push_back("aabc");
    words.push_back("bc");

    // words.push_back("ab");
    // words.push_back("a");

    if(makeEqual(words)) {
        cout << "Output: true" << endl; 
    }
    else {
        cout << "Output: false" << endl;
    }
    return 0;
}