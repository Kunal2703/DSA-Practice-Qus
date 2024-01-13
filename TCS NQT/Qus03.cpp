// Bob is going to bet today on horse riding . There are N horses listed in a sequence of 1 to N.
// The probability of winning of each horse is different so the prices for making a bet on the 
//horses are not the same . There is no limit on the number of horses on which he can bet, 
//but he thinks that if he bets on continuous sequence of horses then he has better chance of win.
// Bob will get K units of money if any horse on which he bets will win.
// But as the award is only k units so he wants to put money less than K.
// Bob wants to bet as many horses as he can.

// Please help Bob to find out the length of maximum continuous sequence of horses on which 
//bob can place bet and remember he will invest money
// less than K.
// If there are more than 1 possible combinations, bob will bet randomly on any one of them.

// Example 1 :
// Input : 
// 10
// 100
// 30 40 50 20 20 10 90 10 10 10
// Output : 3

// Example 2 :
// Input :
// 10
// 100
// 10 90 80 20 90 60 40 60 70 75
// Output : 1

#include<iostream>
using namespace std;

int main() {
    // Input: Number of horses
    int n;
    cin >> n;

    // Input: Maximum amount Bob can invest
    int k;
    cin >> k;

    // Input: total horse
    int horses[n];
    for(int i = 0; i < n; i++) {
        cin >> horses[i];
    }

    // Sliding Window Approach
    int i = 0;           // Start of the window
    int j = 0;           // End of the window
    int sum = 0;         // Total winning probability within the window
    int count = 0;       // Number of horses within the window
    int fCount = 0;      // Maximum length of the continuous sequence

    // Loop through the array to find the maximum continuous sequence
    while(j < n) {
        // Check if the winning probability for the current horse is greater than or equal to K
        if(horses[j] >= k) {
            // Move to the next horse
            j++;
            i = j;          // Reset the window
            count = 0;      // Reset the count
            sum = 0;        // Reset the total winning probability
        }

        // Check if adding the winning probability would exceed K
        else if(sum + horses[j] >= k) {
            sum -= horses[i];   // Remove the winning probability of the first horse in the window
            i++;                // Move the window to the right
            count--;            // Decrease the count
        }

        // Add the winning probability to the window
        else {
             sum += horses[i];   // Add the winning probability of the current horse to the window
            j++;                // Move to the next horse
            count++;            // Increase the count
        }
        fCount = max(fCount, count);    // Update the maximum length
    }
    fCount = max(fCount, count);   // Handle the last part of the sequence

    // Output: Maximum length of the continuous sequence that Bob can bet on
    cout << fCount << endl;

    return 0;
}