#include<iostream>
using namespace std;
#include<cmath>

int main()
{
    int diff;
    cout<<"Enter the size of the array: ";
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Elements of the array " << i <<": ";
        cin >> array[i];
    }
    cout <<"final Array is: " ;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }


    int max = array[0];
    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        } 
    }

    diff = max - min;
    cout << "\nPair of elements that has the maximum difference among all element pairs: "<<diff << endl;

    int  min_diff = INT_MAX;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(abs(array[j] - array[i]) < min_diff)
            {
                min_diff = abs(array[j]-array[i]);
            }

        }
    }
    cout <<"Pair of elements that has the minimum difference among all element pairs: "<< min_diff;
    cout<<endl;
    return 0;

}