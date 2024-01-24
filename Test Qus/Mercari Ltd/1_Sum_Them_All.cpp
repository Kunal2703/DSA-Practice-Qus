// Calculate the sum of an array of Integers.

// Example numbers = [3, 13, 4, 11, 9]

// The sum is 3+13+4+11+9=40.

// Function Description Complete the function array Sum in the editor below.

// arraySum has the following parameter(s): int numbers[n]: an array of integers Returns

// int: integer sum of the numbers array


// Input Format for Custom Testing

// Sample Case 0

// Sample Input 0

// STDIN      FUNCTION
// 5          numbers[]  size n = 5
// 1          numbers = [1, 2,3,4 5]
// 3
// 4
// 5

#include<iostream>
using namespace std;

int arraySum(vector<int> numbers) {
    int sum = 0;

    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = arraySum(numbers);
    cout << "The sum is: " << result << endl;

    return 0;
}