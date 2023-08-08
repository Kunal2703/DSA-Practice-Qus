#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    v.pop_back();
    cout << "After pop opertaion"<< endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    cout<< "Front element: " << v.front() << endl;
    cout<< "Last element: " << v.back() << endl;

    return 0;
}