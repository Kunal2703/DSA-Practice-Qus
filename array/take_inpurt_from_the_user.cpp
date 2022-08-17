#include<iostream>
using namespace std;
int main()
{
    int array[5];
    for ( int i = 0; i < 5; i++)
    {
        cout<<"Enter a number at index "<<i<<" : ";
        cin >> array[i];
    }
    
    cout<<"Final array is : ";
    for ( int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}