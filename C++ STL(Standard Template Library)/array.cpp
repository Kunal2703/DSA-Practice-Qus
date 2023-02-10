#include<iostream>
#include<array>

using namespace std;

int main()
{
    int array_basic[5] = {1,2,3,4,5};       //basic array

    array<int, 5> arr = {1,2,3,4,5};        // STL array

    int size = arr.size();

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Element at 3rd Index: "<< arr.at(3) << endl;
    cout << "Empty or Not: "<< arr.empty() << endl;
    cout << "First Element of an array: "<< arr.front() << endl;
    cout << "Last element of an array: "<< arr.back() << endl;

}