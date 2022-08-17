#include<iostream>
using namespace std;
int main()
{
    int array[5];
    int sum = 0;
    int product = 1;

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


    for ( int i = 0; i < 5; i++)
    {
        sum += array[i];
        product *= array[i];
    }
    cout<<"\nSum of array is: "<<sum<<endl;
    cout<<"Product of array is: "<<product<<endl;
    return 0;
}