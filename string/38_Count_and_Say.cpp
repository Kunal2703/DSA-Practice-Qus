// --> 38. Count and Say

// Example 1:
// Input: n = 1
// Output: "1"
// Explanation: This is the base case.

// Example 2:
// Input: n = 4
// Output: "1211"
// Explanation:
// countAndSay(1) = "1"
// countAndSay(2) = say "1" = one 1 = "11"
// countAndSay(3) = say "11" = two 1's = "21"
// countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"


/*
Count & Say = i   ->  1
              i+1 ->  1 time 1 aaya => 11
              i+2 ->  2 time 1 aaya => 21
              i+3 ->  1 time 2 aaya and 1 time 1 aaya => 1211
              i+4 ->  1 time 1 aaya and 1 time 2 aaya and 2 time 1 aaya => 111221 ...
*/

#include<iostream>
using namespace std;

string countAndSay(int n) {
    if(n == 1) {
        return "1";
    }

    string say = countAndSay(n-1);

    string result = "";
    for(int i = 0; i < say.size(); i++) {
        char ch = say[i];
        int count = 1;

        while(i < say.size()-1 && say[i] == say[i+1]) {
            count++;
            i++;
        }

        result += to_string(count) + string(1, ch);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    string ans = countAndSay(n);
    cout << "Output: " <<"\"" << ans << "\"" << endl;
    return 0;
}