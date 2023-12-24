#include<iostream>
using namespace std;

int minOperation(string s) {
    int countOperation1  = 0;
    int countOperation2 = 0;

    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && s[i] == '1') {
            countOperation1++;
        }
        else if(i % 2 == 1 && s[i] == '0') {
            countOperation1++;
        }

        if(i % 2 == 0 && s[i] == '0') {
            countOperation2++;
        }
        else if(i % 2 == 1 && s[i] == '1') {
            countOperation2++;
        }
    }
    return min(countOperation1, countOperation2);
}

int main() {
    //string s = "1111";
    //string s = "10";
    string s = "0100";
    
    int minOps = minOperation(s);

    cout << "Minimum Operation: " << minOps<< endl;

    return 0;
}