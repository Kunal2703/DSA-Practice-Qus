//Leftmost Repeating Character
#include<iostream>
using namespace std;

int isRepeatingCharacter(string &str) {
    for(int i = 0; i < str.length(); i++) {
        for(int j = i+1; j < str.length(); j++) {
            if(str[i] == str[j]) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

     cout << "Index of leftmost repeating character: " << isRepeatingCharacter(str) << endl;
    return 0;
}