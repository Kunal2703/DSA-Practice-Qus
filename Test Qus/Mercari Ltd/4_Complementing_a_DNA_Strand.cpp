// A DNA string is made up of four symbols: A, T, C, and G. Each symbol has a complement

// A and T complement each other,
// C and G complement each other.

// Determine the reverse complement of a DNA string by reversing the symbols in the string and 
// replacing each symbol in the reversed string by its complement.

// Example s = GTCAG
// Reverse the string GTCAG -> GACTG
// Replace each symbol by its complement GACTG -> CTGAC
// • The reverse complement of DNA string is CTGAC.

// Function Description
// Complete the function dnaComplement in the editor below.
// dnaComplement has the following parameter(s):

// string s: a string of DNA symbols
// Returns:
// string: a string denoting the reverse complement of s.


// Each character (s[i]) is in the set [A,T,C,G]

// Input Format for Custom Testing
// Input from stdin will be processed as follows and passed to the function.
// The line contains a string s.


// Sample Case 0
// Sample Input 0
// STDIN           Function Parameters
// ACCGGGTTTT      string s = "ACCGGGTTTT"
// Sample Output 0
// AAAACCCGGT

// Explanation 0
// Reverse the string ACCGGGTTTT -> TTTTGGGCCA
// • Replace each symbol by its complement TTTTGGGCCA -> AAAACCCGGT.
// • The reverse complement of DNA string is s = AAAACCCGGT.


// Sample Case 1
// Sample Input 1
// STDIN   Function Parameters
// ATGC    string s = "ATGC"
// Sample Output 1
// GCAT

// Explanation 1
// • Reverse the string ATGC -> CGTA
// • Replace each symbol by its complement CGTA -> GCAT
// The reverse complement of DNA string is s = GCAT


// Sample Case 2
// Sample Input 2
// STDIN     Function Parameters
// ATCGTA    string s = "ATCGTA"
// Sample Output 2
// TACGAT

// Explanation 2
// • Reverse the string ATCGTA -> ATGCTA
// • Replace each symbol by its complement ATGCTA -> TACGAT
// • The reverse complement of DNA string is sc = TACGAT

#include<iostream>
using namespace std;


string dnaComplement(string s) {
    //step 1 -> reverse the string
    reverse(s.begin(), s.end());

    //step 2 -> Create a map for complementing symbols
    for(char &ch : s) {
        if(ch == 'A') {
            ch = 'T';
        }
        else if(ch == 'T') {
            ch = 'A';
        }
        else if(ch == 'C') {
            ch = 'G';
        }
        else if(ch == 'G') {
            ch = 'C';
        }
    }
    return s;
};

int main() {
    string s = "ATCGTA";

    string result = dnaComplement(s);
    cout << result << endl;
    return 0;
}