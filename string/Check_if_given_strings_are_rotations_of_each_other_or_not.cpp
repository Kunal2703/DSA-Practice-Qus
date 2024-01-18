// Input: S1 = ABCD, S2 = CDAB
// Output: Strings are rotations of each other

// Input: S1 = ABCD, S2 = ACBD
// Output: Strings are not rotations of each other

#include<iostream>
#include <queue>

using namespace std;

// bool checkString(string &s1, string &s2) {

//     if(s1.size() != s2.size()) {
//         return false;
//     }

//     queue<char> charQueue;

//     // Enqueue all characters of s1
//     for(char ch : s1) {
//         charQueue.push(ch);
//     }

//     // Check if s2 is a rotation of s1
//     for(char ch : s2) {
//         char frontChar = charQueue.front();
//         charQueue.pop();

//         if(ch != frontChar) {
//             return false;
//         }

//         charQueue.push(frontChar);
//     }
//     return true;
// }

// int main() {
//     string s1, s2;
    
//     cout << "S1: ";
//     cin >> s1;
//     cout << "S2: ";
//     cin >> s2;

//     if(checkString(s1, s2)) {
//         cout<<  "Strings are rotations of each other";
//     }
//     else {
//         cout << "Strings are not rotations of each other";
//     }
//     cout << endl;

//     return 0;
// }



bool checkString(string &s1, string &s2) {
    string temp = s1+s2;

    if(temp.find(s2)){
        return true;
    }
    return false;
}

int main() {
    string s1, s2;
    
    cout << "S1: ";
    cin >> s1;
    cout << "S2: ";
    cin >> s2;

    if(checkString(s1, s2)) {
        cout<<  "Strings are rotations of each other";
    }
    else {
        cout << "Strings are not rotations of each other";
    }
    cout << endl;

    return 0;
}