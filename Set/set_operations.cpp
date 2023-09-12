#include<iostream>
#include<set>
using namespace std;

int main() {
//in acending order
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);

    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
   
//in descending order
   set<int, greater<int> > s1;
   s1.insert(10);
   s1.insert(5);
   s1.insert(15);

   for(auto it1 = s1.begin(); it1 != s1.end(); it1++) {
    cout << *it1 << " ";
   }
   cout << endl;
   return 0;
}

