// Peak Index in a Mountain Array
// Example 1:
// Input: arr = [0,1,0]
// Output: 1(index) ->(i.e. element 1)

// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1(index) ->(i.e. element 2)

// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1(index) ->(i.e. element 10)

#include<iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start < end)
    {
        if(arr[mid] < arr[mid+1])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
        mid = (start+end)/2;
    }
    return start;
}

int main()
{
    int arr[5] ={1,2,3,2,1};

    int Peak_Element = peakElement(arr,5);
    cout << "Peak Element in Array is: "<<Peak_Element<<endl;

    return 0;
}

