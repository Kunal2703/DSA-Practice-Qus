#include<iostream>
using namespace std;
int main()
{
    int SizeofArray, array[100], i, max, min;
    cout<<"Enter the Size of the array: ";
    cin >> SizeofArray;

    cout<<"Enter the element of the Array: ";
    for(i = 0; i < SizeofArray; i++)
    {
        cin >> array[i];
    }
    //assume first element of the array is max & min
    max = array[0];
    min = array[0];

    for(i = 1; i < SizeofArray; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        else if(array[i] < min)
        {
            min = array[i];
        }
    }
    cout<<"\nMaximum element of the array is: ";
    cout<<max <<'\n';

    cout<<"\nMinimum element of the array is: ";
    cout<<min<<"\n";
    return 0;
}