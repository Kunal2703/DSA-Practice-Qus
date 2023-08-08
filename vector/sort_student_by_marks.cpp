#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printSortedByMarks(int marks[], int roll[], int n)
{

    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(marks[i], roll[i]));
    }
    sort(v.begin(), v.end(), greater<pair<int, int> >());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << " " << v[i].first << endl;
    }
}

int main(){
    
    int marks[] = {70,80,40,90};
    int roll[] = {101, 108, 103, 105};

    int n = sizeof(marks) / sizeof(marks[0]);

    printSortedByMarks(marks, roll, n);
    
    return 0;
}