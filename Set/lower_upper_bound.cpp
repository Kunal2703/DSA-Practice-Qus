#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

//Lower Bound Operation
    auto it = s.lower_bound(35);
    if(it != s.end()) {
        cout << "Lower Bound: " << *it << endl;
    }
    else {
        cout << "Given element is greater than the largest" << endl;
    }

//Upper Bound Operation
    it  = s.upper_bound(30);
    if(it != s.end()) {
        cout << "Upper Bound: " << *it << endl;
    }
    else {
        cout << "Given element is greater than the largest" << endl;
    }
    return 0;
}