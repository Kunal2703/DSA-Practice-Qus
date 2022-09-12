//Search in Rotated Sorted Array
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4 ->(0 present at index 4)

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1 ->(3 not present on array)

// Example 3:
// Input: nums = [1], target = 0
// Output: -1 ->(0 not present on array)

#include<iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end  = size-1;
    int mid = (start+end)/2;

    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid +1;
        }
        else{
            end= mid;
        }
        mid = (start+end)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = (start+end)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            end = mid -1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int findPosition(int arr[], int size, int key)
{
    int pivot = getPivot(arr,size);

    if(key >=arr[pivot] && key <= arr[pivot-1])
    {
        return binarySearch(arr,pivot, size-1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot-1,key);
    }
}

int main()
{
    int arr[7] = {4,5,6,7,0,1,2};
    int pivot_index = findPosition(arr,7,0);
    cout <<"Index of the Elements is: "<< pivot_index << endl;
    return 0;
}