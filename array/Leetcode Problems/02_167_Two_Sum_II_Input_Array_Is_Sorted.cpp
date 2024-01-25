// Example 1:
// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

// Example 2:
// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].

// Example 3:
// Input: numbers = [-1,0], target = -1
// Output: [1,2]
// Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].

#include<iostream>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
    int n = numbers.size();

    int i = 0;
    int j = n-1;

    while(i < n) {
        if(numbers[i] + numbers[j] > target) {
            j--;
        }
        else if(numbers[i] + numbers[j] < target) {
            i++;
        }
        else if(numbers[i] + numbers[j] == target) {
            return {i+1, j+1};
        }
    }
    return {};
};

int main() {
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);

    int target = 9;

    vector<int> result = twoSum(numbers, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}