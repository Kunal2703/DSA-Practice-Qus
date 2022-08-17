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

    int largest = array[0];
    int smallest = array[0];

    for(int i = 0; i < 5; i++)
    {
        if(array[i] > largest) 
        {
            largest = array[i];
        }

        if(array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    cout<<"\nLargest Element of the array is: "<<largest <<"\nSmallest Element of the array is: "<<smallest<<"\n";
    return 0;
}