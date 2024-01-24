// For two positive integers, lo and hi, and a limit k, find two integers, a and b, 
// satisfying the following criteria. Return the value of ae b. The ⊕ symbol denotes 
// the bitwise XOR operator.

// • lo <= a < b <= hi
// • The value of a⊕b is maximal for a⊕b≤k.
// Example
// lo = 3
// hi = 5
// k = 6

// a   b   a⊕b
// 3   4   7
// 3   5   6
// 4   5   1

// The maximal useable XORed value is 6 because it is the maximal value that is less than or 
// equal to the limit k = 6.

// Function Description
// Complete the function maxXor in the editor below. The function must return an integer denoting 
// the maximum possible value of a⊕b for all a⊕b<=k

// maxXor has the following parameter(s): 
// int lo: an integer 
// int hi: an integer
// k: an integer

// Constraints
// • 1<=lo<hi≤10^4
// • 1<=k≤10^4

// Input Format for Custom Testing
// Input from stdin will be processed as follows and passed to the function.
// The first line contains an integer, lo, the lower range limit. 
// The second line contains an integer, hi, the upper range limit.
// The third line contains an integer, k, the maximal limit.

// • SampleCase0 Sample Input 0
// STDIN   Function
// 1   →   lo=1 
// 3   →   hi=3
// 3   →   k=3
// Sample Output 0 
// 3
// Explanation 0
// The following are the possible values of a and b satisfying lo ≤a <b ≤hi.
// • a = 1, b = 2 → a⊕b = 3 
// • a = 1, b = 3 → a⊕b = 2 
// • a =2, b = 3 → a⊕b = 1
// The maximum possible value of a⊕b ≤ 3 is 3.

// • Sample Case1 Sample Input 1
// STDIN   Function
// 2    →  lo=2
// 4    →  hi=4 
// 8    →  k=8
// Sample Output 1 
// 7
// Explanation 1
// The following are the possible values of a and b satisfying lo≤a<b≤hi.
// • a = 2, b = 3 → a⊕b = 1 
// • a = 2, b = 4 → a⊕b = 6 
// • а = 3, b = 4 → a⊕b = 7
// The maximum possible value of a⊕b ≤ 8 is 7.


#include<iostream>
using namespace std;

int maxXor(int lo, int hi, int k) {
    int mx = 0;

    for(int i = lo; i <= hi; i++) {
        for(int j = i+1; j <= hi; j++) {
            int currentXor = i ^ j;

            if(mx < currentXor && currentXor <= k) {
                mx = currentXor;

                if(mx == k) {
                    break;
                }
            }
        }
        if(mx == k) {
            break;
        }

    }
    return mx;
};

int main() {
    int lo, hi, k;

    cout << "lo: ";
    cin >> lo;
    cout << "hi: ";
    cin>> hi;
    cout << "k: ";
    cin>> k;

    int result = maxXor(lo, hi, k);
    cout << "Output: " << result << endl;

    return 0;
}