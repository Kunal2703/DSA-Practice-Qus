#include <iostream>
using namespace std;

bool closeStrings(string word1, string word2) {
    // Get the lengths of the input strings
    int m = word1.size();
    int n = word2.size();

    // Check if the lengths of both string are same or not. If diff return false
    if (m != n) {
        return false;
    }

    // Initialize arrays to store the frequency of each character in the strings
    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    // Iterate through each character in the strings to calculate frequencies
    for (int i = 0; i < m; i++) {
        char ch1 = word1[i];
        char ch2 = word2[i];

        // Convert characters to index (0-25) based on 'a'
        int idx1 = ch1 - 'a';
        int idx2 = ch2 - 'a';

        // Increment the frequency count for each character in both strings
        freq1[idx1]++;
        freq2[idx2]++;
    }

    // Check if the sets of characters are the same in both strings
    for (int i = 0; i < 26; i++) {
        // If a character is present in one string but not in the other, return false
        if (freq1[i] != 0 && freq2[i] != 0)
            continue; // not present in both the strings
        if (freq1[i] == 0 && freq2[i] == 0)
            continue; // present in both the strings

        // char present in one string and not present in another string, then return false
        return false;
    }

    // Sort the frequency arrays for comparison
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    // Check if the frequencies of characters match between the two strings
    if (freq1 == freq2) {
        return true;
    }
    else {
        return false;
    }
}


int main() {
    // Test case 1
    string word1 = "abc";
    string word2 = "bca";
    bool result1 = closeStrings(word1, word2);
    cout << "Output: ";
    if (result1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    cout << endl;

    // Test case 2
    string word3 = "a";
    string word4 = "aa";
    bool result2 = closeStrings(word3, word4);
    cout << "Output: ";
    if (result2) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    cout << endl;

    // Test case 3
    string word5 = "cabbba";
    string word6 = "abbccc";
    bool result3 = closeStrings(word5, word6);
    cout << "Output: ";
    if (result3) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    cout << endl;
    return 0;
}