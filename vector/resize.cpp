#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(15);

    for(int i=0; i<v.size();i++) {
        cout << v[i] << endl;
    }
    cout <<"After resize 3: " << endl;
    v.resize(3);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }

    cout <<"After resize 5: " << endl;
    v.resize(5);
    for(int i=0; i<v.size(); i++) {
        cout<< v[i] << endl;
    }

    cout <<"After resize 8: " << endl;
    v.resize(8, 100);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] <<endl;
    }
    return 0;
}