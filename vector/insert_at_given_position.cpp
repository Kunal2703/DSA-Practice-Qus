#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(20);
    v.push_back(15);

    auto it = v.insert(v.begin(), 100);

    v.insert(v.begin()+2, 200);

    v.insert(v.begin(), 2, 300);

    for(int i = 0; i < v.size(); i++) {
        cout << it[i] << endl;
    }

    vector <int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin()+2);
    cout << "\n";
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << endl;
    }
    return 0;
}