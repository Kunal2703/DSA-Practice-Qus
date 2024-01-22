// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1]
// Output: [1,2]

#include <iostream>
using namespace std;

vector<int> findErrorNums(vector<int> &nums) {
    // Get the size of the input vector 'nums'.
    int n = nums.size();

    // Initialize variables to store the missing and duplicated numbers.
    int miss = 0;
    int dup = 0;

    // Create a Unordered_map to store the frequency of each number in 'nums'.
    unordered_map<int, int> mp;

    for (int x : nums) {
        mp[x]++;
    }

    for (int i = 1; i <= n; i++) {
        // Check if the number 'i' is present in the map.
        if (mp.count(i)) {
            if (mp[i] == 2) {
                dup = i; // If the frequency of 'i' is 2, it is the duplicated number.
            }
        }
        else {
            miss = i; // If 'i' is not present in the map, it is the missing number.
        }
    }

    // Return a vector containing the duplicated and missing numbers.
    return {dup, miss};
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);

    vector<int> result = findErrorNums(nums);
    cout << "Output: ";
    for (int nums : result) {
        cout << nums << " ";
    }
    cout << endl;

    return 0;
}


// --645. Set Mismatch--

// You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

// Example 1: 
// Input: nums = [1,2,2,4]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1]
// Output: [1,2]

// Constraints:
// 2 <= nums.length <= 10^4
// 1 <= nums[i] <= 10^4