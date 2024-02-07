//--451. Sort Characters By Frequency--

// Example 1:
// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

// Example 2:
// Input: s = "cccaaa"
// Output: "aaaccc"
// Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
// Note that "cacaca" is incorrect, as the same characters must be together.

// Example 3:
// Input: s = "Aabb"
// Output: "bbAa"
// Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
// Note that 'A' and 'a' are treated as two different characters.

#include<iostream>
using namespace std;

string frequencySort(string s) {
    int n = s.size();
    unordered_map<char, int> mp;
    vector<pair<int, int> > result;

    for(int i = 0; i < n; i++) {
        mp[s[i]]++; 
    }

    for(auto it : mp) {
        result.push_back({it.second, it.first});
    }

    sort(result.rbegin(), result.rend());

    string ans = "";

    for(auto it : result) {
        for(int j = 0; j < it.first; j++) {
            ans += it.second;
        }
    }
    return ans;
}

int main() {
    string s = "tree";
    
    string ans = frequencySort(s);
    cout << "Output: " << ans << endl;

    return 0;
}