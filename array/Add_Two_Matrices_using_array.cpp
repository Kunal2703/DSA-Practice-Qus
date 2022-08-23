#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";

    int size;
    cin >> size;

    int array1[size][size];
    int array2[size][size];
    int array3[size][size];

    cout<<"Array 1"<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<"Enter the Elements of the array1[" <<i<< "][" <<j<< "] : ";
            cin >> array1[i][j];
        }
    }

    cout<<"Array 2"<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<"Enter the Elements of the array2[" <<i<< "][" <<j<< "] : ";
            cin >> array2[i][j];
        }
    }


    for (int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }

    cout<<"Final array after adding (matrix1 and matrix2) is: "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout <<"\t"<< array3[i][j];
        }
        cout<<endl;
    }

    cout<<"\n";

    return 0;

    
}