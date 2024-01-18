// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

#include<iostream>
using namespace std;

void reverseString(vector<char> &str) {
    int left = 0;
    int right = str.size()-1;

    while(left < right) {
        char ch = str[left];
        str[left] = str[right];
        str[right] = ch;

        left++;
        right--;
    }
};

int main() {
    vector<char> str;
    str.push_back('h');
    str.push_back('e');
    str.push_back('l');
    str.push_back('l');
    str.push_back('o');

    reverseString(str);
    
    for(char &it: str) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}