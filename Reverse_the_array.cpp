#include<iostream>
using namespace std;
int main()
{
    int SizeofArry, arr[100], i;
    cout<<"Enter size of the Array: ";
    cin >> SizeofArry;

    cout<<"Enter the Element of the Array:\n";
    for(i = 0; i<SizeofArry; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe Original Element of the Array is: ";
    for(i = 0; i<SizeofArry; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Reverse, the Element of the Array is: ";
    for(i = SizeofArry-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}