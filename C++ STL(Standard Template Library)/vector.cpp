#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;                                      //create a null vector i.e. v 
    cout << "Capacity: "<< v.capacity() << endl;        //to check the capacity of vector(means allocation of memory)

    v.push_back(1);
    cout << "Capacity: "<< v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: "<< v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: "<< v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity: "<< v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity: "<< v.capacity() << endl;

    cout << "Size: "<< v.size() << endl;

    cout << "First element of the vector: "<< v.front() << endl;
    cout << "Last element of the vector: "<< v.back() << endl;

    cout<<"Before pop: " <<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << i << " "<<endl;
    }

    v.pop_back();

    cout << "After pop: " << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << i << " "<<endl;
    }
    
    cout << "Elements at front: "<< v.front() <<endl;
    cout << "Last element of the vector: "<< v.back() << endl;

    /*
    v.pop_back(1);
    for(int i = 0; i < v.size(); i++)
    {
        cout << i << " "<<endl;
    }
    */

    cout<<"Pop at index 3: "<< endl;
    v.erase(v.begin()+2);                   //pop a specific element
    for(int i = 0; i < d.size(); i++)
    {
        cout<< i << " "<< endl;
    }

}