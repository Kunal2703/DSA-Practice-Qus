#include<iostream>
using namespace std;

int minSteps(string s, string t) {
    int n = s.size();

    int mp[26] = {0};

    for(int i = 0; i < n; i++) {
        mp[s[i] - 'a']++;
        mp[t[i] - 'a']--;
    }

    int result = 0;
    for(int i = 0; i < 26; i++) {
        if(mp[i] > 0) {
            result += mp[i];
        }
    }
    return result;
}

int main() {
    // Example 1:
    string s1 = "bab";
    string t1 = "aba";
    int result1 = minSteps(s1, t1);
    cout << "Output: " << result1 << endl;

    // Example 2:
    string s2 = "leetcode";
    string t2 = "practice";
    int result2 = minSteps(s2, t2);
    cout << "Output: " << result2 << endl;

    // Example 3:
    string s3 = "anagram";
    string t3 = "mangaar";
    int result3 = minSteps(s3, t3);
    cout << "Output: " << result3 << endl;
    return 0;
}