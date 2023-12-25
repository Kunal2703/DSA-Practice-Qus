#include<iostream>
#include <vector>

using namespace std;

vector<int> findWordsContaining(vector<string> &words, char x) {

    vector<int> ans;

    for(int i = 0; i < words.size(); i++) {
        string temp = words[i];

        for(int j  = 0; j < temp.size(); j++) {
            if(temp[j] == x) {
                ans.push_back(i);
                break;
            }
        }
    }
    return ans;
}

int main() {
    vector<string> words;
    // words.push_back("leet");
    // words.push_back("code");
    words.push_back("abc");
    words.push_back("bcd");
    words.push_back("aaaa");
    words.push_back("cbc");

    // char x = 'e';
    char x = 'a';

    vector<int> result;
    result = findWordsContaining(words, x);

    cout << "[";
    for(int i  = 0; i < result.size(); ++i) {

        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout<< "]" << endl;
    return 0;
}