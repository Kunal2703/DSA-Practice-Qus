#include <iostream>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char &ch) {
    // Check for both lowercase and uppercase vowels
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

bool halvesAreAlike(string s) {
    // Get the length of the string
    int n = s.size();
    // Calculate the middle index to split the string into two halves
    int mid = n / 2;

    // Initialize two pointers, one for each half
    int i = 0;   // Pointer for the first half
    int j = mid; // Pointer for the second half

    // Initialize counters for vowels in each half
    int leftCount = 0;
    int rightCount = 0;

    // Iterate through both halves simultaneously
    while (i < n / 2 && j < n) {

        // If the current character in the first half is a vowel, increment leftCount
        if (isVowel(s[i])) {
            leftCount++;
        }

        // If the current character in the second half is a vowel, increment rightCount
        if (isVowel(s[j])) {
            rightCount++;
        }
        // Move both pointers to the next characters
        i++;
        j++;
    }

    // Check if the vowel counts in both halves are equal
    if (leftCount == rightCount) {
        return true; // Halves are alike
    }
    else {
        return false; // Halves are not alike
    }
}

int main() {
    // Example 1
    string str1 = "book";
    bool result1 = halvesAreAlike(str1);
    cout << "Output: " << result1 << endl;

    // Example 2
    string str2 = "textbook";
    bool result2 = halvesAreAlike(str2);
    cout << "Output: " << result2 << endl;

    return 0;
}