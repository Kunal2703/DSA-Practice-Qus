//First and Last Position of an Element In Sorted Array

#include<iostream>
using namespace std;

//Check First Occurance
int firstOccurence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    int ans = -1;

    while(start <= end)
    {
        if(array[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if(array[mid]  < key)
        {
            start = mid + 1;
        }
        else if(array[mid] > key)
        {
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

//check Last Occurance
int lastOccurence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    int ans = -1;

    while(start <= end)
    {
        if(array[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(array[mid] < key)
        {
            start = mid + 1;
        }
        else if(array[mid] > key)
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int even[8] = {0,1,3,3,3,3,12,18};

    int First_Occurence =  firstOccurence(even,8,3);
    cout << "First occurance of 3 is: " << First_Occurence << endl;

    int Last_Occurence = lastOccurence(even, 8, 3);
    cout<<"Last Occurence of 3 is: " << Last_Occurence <<endl;

    return 0;
}