#include<iostream>
using namespace std;

int firstOccurance(int array[], int size, int key)
{
    int start = 0;
    int end = size -1;

    int mid = (start + end) / 2;
    int ans = -1;

    while(start <= end)
    {
        if(array[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }
        else if(array[mid] > key)
        {
            end = mid - 1;
        }
        else if(array[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastOccurance(int array[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int ans = -1;
    int mid = (start + end)/2;

    while(start <= end)
    {
        if(array[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(array[mid] > key)
        {
            end = mid - 1;
        }
        else if(array[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {1,3,3,3,3,9};

    int first_occurance = firstOccurance(even, 6, 3);
    cout<<"First Occurance of 3 is: "<<first_occurance<<endl;

    int last_occurance = lastOccurance(even, 6, 3);
    cout<<"Last Occurance of 3 is: " << last_occurance<<endl;
    
    //calculte Total number of occurance
    int totalOccurance = last_occurance - first_occurance + 1;
    cout<<"Total number of occurance: "<< totalOccurance<<endl;


    return 0;
}