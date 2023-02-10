#include<iostream>
#include <deque>
using namespace std;

int main()
{
        deque<int> d;

//Push and Pap Operations

    d.push_back(1);
    d.push_front(3);

    for(int i = 0; i < d.size(); i++)
    //for(int i : d)
    {
        cout << d[i] << endl;
        //cout << i << endl;
    }

    d.pop_back();
    cout << "After Pop: " << endl;
    for(int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }

    d.push_back(5);
    d.push_back(9);
    cout << "After Push the Elements: " << endl;
    for(int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }

//Print the Element at particular index
    cout << "Element at 1st Index is: " << d.at(1) << endl;

//Print the Front and Back elements
     cout << "Element at front: " << d.front() << endl;
     cout << "Element at back: " << d.back() << endl;

//Check the size
    cout << "size is: " << d.size() << endl;

//Erase the Elements
    d.erase(d.begin(), d.begin()+1);        //delete the first element
    cout << "Size after erase: "<< d.size() << endl;

    cout<<"Elemets Present after erasing: " << endl;
    for(int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }

    return 0;
}