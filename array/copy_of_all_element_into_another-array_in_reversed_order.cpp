#include<iostream>
using namespace std;
int main()
{
    int array[5], reverse_array[5];
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
    int j=0;

    for (int i = 4; i >= 0; i--)
    {
        reverse_array[i] = array[j];
        j++;
    }

    cout<<"\nReversed array : ";
    for (int i = 0; i < 5; i++)
    {

        cout<<reverse_array[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}