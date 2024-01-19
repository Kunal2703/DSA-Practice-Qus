// Example 1:
// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be:
//["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

// Example 2:
// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be:
//["a"]
// Explanation: The only group is "a", which remains uncompressed since it's a single character.

// Example 3:
// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be:
//["a","b","1","2"]
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".

#include <iostream>
using namespace std;

int compress(vector<char> &chars) {
    // Get the size of the input vector
    int n = chars.size();

    // Initialize an index variable to keep track of the position in the modified array
    int index = 0;
    // Initialize a loop variable
    int i = 0;

    // Start a loop to iterate through the characters in the array
    while (i < n) {
        // Get the current character
        char curr_char = chars[i];

        // Initialize a variable to count consecutive occurrences of the current character
        int char_count = 0;

        // Continue counting consecutive occurrences of the current character
        while (i < n && chars[i] == curr_char) {
            char_count++;
            i++;
        }

        // Update the original array with the current character
        chars[index] = curr_char;
        index++;

        // Check if the count of consecutive characters is greater than 1
        if (char_count > 1) {
            // Convert the count to a string and update the original array with each digit
            string char_count_to_str = to_string(char_count);
            for (char &ch : char_count_to_str) {
                chars[index] = ch;
                index++;
            }
        }
    }
    // Return the length of the modified array
    return index;
};

int main() {
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('c');
    chars.push_back('c');
    chars.push_back('c');

    int result = compress(chars);
    cout << "Output: ";
    cout << "[";
    for (int i = 0; i < result; i++) {
        cout << "\"" << chars[i] << "\"";
        if (i < result - 1) {
            cout << ", ";
        }
    }
    cout << "]";

    cout << "\nThe length of the output is: " << result << endl;

    return 0;
}
