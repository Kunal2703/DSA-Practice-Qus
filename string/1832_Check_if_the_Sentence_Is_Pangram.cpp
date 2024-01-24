//1832. Check if the Sentence Is Pangram

//A pangram is a sentence where every letter of the English alphabet appears at least once.

// Example 1:
// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.

// Example 2:
// Input: sentence = "leetcode"
// Output: false

#include<iostream>
using namespace std;

bool checkIfPangram(string sentence) {
    vector<int> arr(26, 0);
    for(char &ch : sentence) {
        int index = ch - 'a';
        arr[index]++;
    }

    for(int &count : arr) {
        if(count == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    bool result = checkIfPangram(sentence);

    cout << "Output: ";
    if(result) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    cout << endl;
    return 0;
}