#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(15);

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }

    cout <<"After erase\n";
    v.erase(v.begin()+3);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}