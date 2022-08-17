#include<iostream>
using namespace std;

int main()
{
    int array[5];
    int positive = 0;
    int negative = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;

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

    //check
    for (int i = 0; i < 5; i++){
            if(array[i] > 0)
        {
            positive ++;
        }

        else if(array[i] < 0)
        {
            negative ++;
        }
        else
        {
            zero ++;
        }

        if(array[i] %2 == 0)
        {
            even ++;
        }
        else
        {
            odd ++;
        }
    }
    
    cout<<"Positive Number: "<<positive<< "\nNegative Number: "<<negative<< "\nNumber will be Zero: "<<zero<< "\nEven Number: "<<even<< "\nOdd Number: "<<odd<<"\n";
    return 0;
}