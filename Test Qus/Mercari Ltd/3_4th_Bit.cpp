//-----4th Bit----------------
// A binary number is a combination of Is and Os. Its nth least significant digit is the
// nth digit starting from the right starting with 1. Given a decimal number, 
// convert it to binary and determine the value of the the 4th least significant digit.

// Example

// number = 23

// Convert the decimal number 23 to binary number: 23base10= 2^4+2^2+2^1+2^0 =(10111)base2

// The value of the index from the right in the binary representation is 0.

// Function Description

// Complete the function fourth Bit in the editor below.

// fourth Bit has the following parameter(s):

// int number: a decimal integer

// Returns:

// Int: an integer 0 or 1 matching the 4th least significant digit in the binary representation of number

// Constraints

// 0 <=number <= 2^31

// Input Format for Custom Testing

// Input from stdin will be processed as follows and passed to the function.

// The only line contains an integer, number.

// Sample Case 0
// STDIN      FUNCTION
// 32     ->  NUMBER = 32
// Sample Input 0
// 0
// STDIN Function
// Sample Output 0

// Explanation 0

// • Convert the decimal number 32 to binary number: 32base10 = (100000)base2

// • The value of the 4th index from the right in the binary representation is 0.

// Sample Case 1

// Sample Input 1

// STDIN

// Function

// 77 -> number = 77

// Sample Output 1

// 1

// Explanation 1

// Convert the decimal number 77 to binary number: 77base10 = (1001101)base2

// The value of the 4th index from the right in the binary representation is 1.

#include<iostream>
using namespace std;

int arr[32];

void decimalToBinary(int n) {
    int i = 0;

    while(n != 0) {
        arr[i] = n % 2;
        n = n/2;
        i++;
    }
};

int fourthBit(int num) {
    decimalToBinary(num);

    return arr[3];
}

int main() {
    int n;
    cin >> n;

    int result = fourthBit(n);
    cout << "Output: " << result << endl;

    return 0;
}