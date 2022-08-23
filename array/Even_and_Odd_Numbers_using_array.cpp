#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int size;
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the Elements of the array: "<<i<<": ";
        cin >> array[i];
    }
    
    cout<<"Final array is: ";
    for(int i = 0; i < size; i++)
    {
       cout<<array[i]<<" ";
    }

    int array_even[size];
    int array_odd[size];
    int k = 0;
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if(array[i] %2 == 0)
        {
            array_even[j] = array[i];
            j++;
        }

        else
        {
            array_odd[k] = array[i];
            k++;

        }
    }

    cout<< "\nEven Elements in Array are: ";
    for (int i = 0; i < j; i++)
    {
        cout<<" "<<array_even[i]<<" ";
    }


    cout<<"\nOdd Elements in Array are: ";
    for(int i = 0; i < k; i++)
    {
        cout<<" "<<array_odd[i]<<" ";
    }
    cout<<endl;
    return 0;
}