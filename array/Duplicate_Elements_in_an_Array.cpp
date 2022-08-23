#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int size;
    cin >> size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter the elements of the array: ";
        cin >> array[i];
    }
    cout<<"Final array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"\nDuplicate Values in Given Array are is: ";
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if (array[i] == array[j])
            {
                cout<<array[i]<<" ";
            }
            
        }
    }
    cout<<endl;
    return 0;

}
