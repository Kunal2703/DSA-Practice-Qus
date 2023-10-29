//Program to count occurrence of a given character in a string

// Input : S = “geeksforgeeks” and c = ‘e’
// Output : 4
// Explanation: ‘e’ appears four times in str.

// Input : S = “abccdefgaa” and c = ‘a’
// Output : 3
// Explanation: ‘a’ appears three times in str.

#include<iostream>
using namespace std;

int count(string str, char c) {
    int res = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c) {
            res++;
        }
    }
    return res;
}

int main () {

    string str = "hello, how are you? have a happy day.";
    char c = 'h';
    cout << count(str, c) << endl;
    return 0;
}