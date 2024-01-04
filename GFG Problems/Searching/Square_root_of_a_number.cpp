//Given an integer x, find the square root of x. 
//If x is not a perfect square, then return floor(√x).

// Example 1:
// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect 
// square, floor of square_root of 5 is 2.

// Example 2:
// Input:
// x = 4
// Output: 2
// Explanation: Since, 4 is a perfect 
// square, so its square root is 2.

#include<iostream>
using namespace std;

long long int floorSqrt(long long int X) {
    int result = floor(sqrt(X));
    return result;
}

int main() {
    int x = 5;
    int result = floorSqrt(x);
    cout << "Output: " << result << endl;
    return 0;
}