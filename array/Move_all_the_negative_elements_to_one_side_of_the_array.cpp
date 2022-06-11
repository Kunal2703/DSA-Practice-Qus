#include<iostream>
using namespace std;

void rearrange(int array[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i] < 0)
        {
            if (i != 0)
            {
                swap(array[i], array[j]);
            }
            j++;
        }
    }
}

void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    printf("%d ", array[i]);
}

int main()
{
    int array[] = {-1,-2,-3,4,5,-6,7,-8,9};
    int n = sizeof(array) / sizeof(array[0]);
    rearrange(array, n);
    printarray(array, n);
    
    return 0;
}