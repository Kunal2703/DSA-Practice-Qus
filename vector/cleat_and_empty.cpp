#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(15);

    v.clear();
    cout<<v.size()<<endl;

    if(v.empty() == true) {
        cout << "Empty"<<endl;
    }
    else {
        cout << "Not Empty"<<endl;
    }
    return 0;
}