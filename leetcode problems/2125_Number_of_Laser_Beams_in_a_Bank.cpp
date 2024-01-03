#include <iostream>
using namespace std;

int numberOfBeams(vector<string> &bank) {
    // Get the number of rows in the bank.
    int n = bank.size();

    // Initialize the count of security devices in the previous row.
    int prevDeviceCount = 0;

    // Initialize the result variable to store the total number of laser beams.
    int result = 0;

    // Iterate through each row in the bank.
    for (int i = 0; i < n; i++) {

        // Initialize the count of security devices in the current row.
        int currDeviceCount = 0;

        // Iterate through each character in the current row.
        for (char &ch : bank[i]) {

            // Increment the count if the character is '1' (security device).
            if (ch == '1') {
                currDeviceCount++;
            }
        }
        // Calculate and accumulate the number of laser beams between the current and previous
        // row devices.
        result += currDeviceCount * prevDeviceCount;

        // Update the previous device count if the current row has security devices.
        if (currDeviceCount != 0) {
            prevDeviceCount = currDeviceCount;
        }
    }
    // Return the total number of laser beams.
    return result;
}

int main()
{

    vector<string> bank;
    // Test case 1
    bank.push_back("011001");
    bank.push_back("000000");
    bank.push_back("010100");
    bank.push_back("001000");

    // Test case 2
    //  bank.push_back("000");
    //  bank.push_back("111");
    //  bank.push_back("000");

    int result = numberOfBeams(bank);
    cout << "Output: " << result << endl;
    return 0;
}