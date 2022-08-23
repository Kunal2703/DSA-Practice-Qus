#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter the Elements of the array: "<< i <<": ";
        cin>>array[i];
    }

    cout<<"Final Array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";

    }

    int temp;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout<<"\nArray in Ascending order: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";

    }
    cout<<endl;

    return 0;
}