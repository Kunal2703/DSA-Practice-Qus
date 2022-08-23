#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Elements of the array: "<<i<<": ";
        cin>>array[i];
    }
    cout<<"Entered";
    cout << "Final Array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<< array[i]<<" ";
    }

    int temp;
   
    for (int i=0; i<size; i++)
    { 
        for(int j=0; j <size-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            } 
        }
    }
    cout<<"\nArray in Descending order: ";

    for(int i = size-1; i>=0; i--)
    {
        cout << array[i]<<" ";
    }
    cout <<endl;

    return 0;
}
