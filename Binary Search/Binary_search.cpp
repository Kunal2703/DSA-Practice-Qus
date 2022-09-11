#include<iostream>
using namespace std;

int binary_serach(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    //calculate mid index
    int mid = (start + end) / 2;
    
    while (start <= end)
    {
        // target value is found then return mid value
        if(array[mid] == key)
        {
            return mid;
        }

        //if the target is less than the middle element, 
        //discard all elements in the right search space, including the middle element
        else if(array[mid] > key)
        {
            end = mid - 1;
        }

        //if the target is more than the middle element, 
        //discard all elements in the left search space, including the middle element
        else
        {
            // array[mid] < key ----> return
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    // target doesn't exist in the array
    return -1;
}

int main()
{
    int even[6] = {1,2,4,6,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    //(even, array_size, search_number)
    int evenIndex = binary_serach(even, 6, 1);
    cout << " Index of 1 is " << evenIndex << endl;

    int oddIndex = binary_serach(odd, 5, 14);
    cout << " Index of 14 is " << oddIndex << endl;

    return 0;
}