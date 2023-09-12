#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(15);
    s.insert(10);
    s.insert(20);
    s.insert(25);

//find operation
    auto it = s.find(10);
    if(it == s.end()) {
        cout << "Not Found";
    }
    else {
        cout << "Found ";
    }
    cout << endl;

//count operation
    if(s.count(10)) {
        cout << "found";
    }
    else {
        cout << "not found";
    }
    cout << endl;

//size operation
    cout << s.size() << endl;

//erase operation
    s.erase(20);
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

//claer operation
    s.clear();
    cout << s.size() << endl;
    return 0;
}