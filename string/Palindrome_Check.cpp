#include<iostream>
using namespace std;
//Naive Method

/*
bool isPlaindrome(string &str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return(rev == str);
}
*/

//Efficient Method
bool isPlaindrome(string &str) {
    int begin = 0;
    int end = str.length()-1;

    while(begin < end) {
        if(str[begin] != str[end]) {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if(isPlaindrome(str)) {
        cout << "The input string is a Plaindrome" << endl;
    }
    else {
        cout << "The input string is not a Plaindrome" << endl;
    }
    return 0;
}