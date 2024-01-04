#include <iostream>
using namespace std;

int minOperations(vector<int> &nums) {
    // Create a hash map to store the frequency of each element in the array
    unordered_map<int, int> mp;

    // Count the frequency of each element in the array
    for (int &num : nums) {
        mp[num]++;
    }

    // Initialize the result variable to store the minimum number of operations
    int result = 0;

    // Iterate over the elements and their frequencies in the hash map
    for (auto &it : mp) {

        // Get the frequency of the current element
        int freq = it.second;

        // If the frequency is 1, it means there is a single element without a pair, so it's
        // impossible to make the array empty
        if (freq == 1) {
            return -1;
        }

        // Calculate the number of operations needed for the current element and add it to the
        // result
        result += ceil((double)freq / 3);
    }

    // Return the total number of operations required to make the array empty
    return result;
}

int main() {

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    int result = minOperations(nums);
    cout << "Output: " << result << endl;

    return 0;
}