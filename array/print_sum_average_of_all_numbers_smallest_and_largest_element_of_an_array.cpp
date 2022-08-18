#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    float avg;
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Elements of the array " << i <<": ";
        cin >> array[i];
    }
    cout <<"final Array is: " ;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    //---------operations-----------
    //sum
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    //average
    avg = sum / 5.0;

    //check max and min values
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < 5; i++)
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
    
    cout <<"\nSum: "<<sum << endl;
    cout<<"Average: "<<avg << endl;
    cout <<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
    return 0;
}