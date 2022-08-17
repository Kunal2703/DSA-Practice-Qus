#include<iostream>
using namespace std;

int main()
{
    int array[5];
    int num;

    for(int i =0 ; i<5; i++)
    {
        cout <<"Enter a number at index " << i <<" : ";
        cin >> array[i];
    }
    cout<<"Final array is : ";
    for(int i = 0; i < 5; i++)
    {
        cout<<array[i] <<" ";
    }


    cout<<"\nEnter a nuber to check present on array or not : ";
    cin >> num;
    int found = 0;

    for(int i = 0; i < 5; i++)
    {
        if(array[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found)
    {
        cout<<"Number Found\n";
    }
    else
    {
        cout <<"Number not found\n";
    }

    return 0;
}