#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &v) {
    v.push_back(50);
    v.push_back(60);
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    v.push_back(15);

    
    fun(v);
    
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }
    return 0;
}