// Given Two binary numbers (in 0 and 1) in the form of string. 
// Find out whether there is a possibility whether these numbers can 
// become equal by rearranging their respective Os and 1s.
// For ex: 101 and 011 can be arranged within themselves to become either 101 or 011.
// Example 1:
// 3 → length of input string
// 101 -> input string 1
// 011 -> input string 2
// Output: True

#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s1, s2;
    cin >> s1;
    cin >> s2;


    int count_0_binary1 = 0;
    int count_1_binary1 = 0;
    int count_0_binary2 = 0;
    int count_1_binary2 = 0;


    for(int i = 0; i < n; i++) {
        if(s1[i] == '0') {
            count_0_binary1++;
        }
        else {
            count_1_binary1++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(s2[i] == '0') {
            count_0_binary2++;
        }
        else {
            count_1_binary2++;
        }
    }

    if(count_0_binary1 == count_0_binary2 && count_1_binary1 == count_1_binary2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}