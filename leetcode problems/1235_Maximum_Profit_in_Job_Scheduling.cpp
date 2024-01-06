#include <iostream>
using namespace std;

// Array to store memoization results for dynamic programming
int dp[50001];
// Number of jobs
int n;

// Function to find the next valid index for the current job
int getNextIndex(vector<vector<int> > &arr, int left, int currentJobEnd) {
    int right = n - 1;
    int result = n + 1;

    // Binary search to find the next valid index
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the start time of the mid job is greater or equal to the current job's end time
        if (arr[mid][0] >= currentJobEnd) {
            result = mid; // Update the result

            // Adjust the search range
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return result;
}

// Recursive function to solve the problem
int solve(vector<vector<int> > &arr, int i) {
    // Base case: If all jobs are processed
    if (i >= n) {
        return 0;
    }

    // If the result for this index is already computed, return it
    if (dp[i] != -1) {
        return dp[i];
    }

    // Calculate the maximum profit by either taking or skipping the current job
    int next = getNextIndex(arr, i + 1, arr[i][1]);

    // Recursive call
    int take = arr[i][2] + solve(arr, next);
    int skip = solve(arr, i + 1);

    // Store the result in the memoization array and return
    return dp[i] = max(take, skip);
}

int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit) {
    n = startTime.size();

    // Initialize the memoization array with -1
    for (int i = 0; i < n; i++) {
        dp[i] = -1;
    }

    // Create a 2D array to store the jobs' information and sort it based on start times
    vector<vector<int> > arr(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        //{startTime, endTime, profit}
        arr[i][0] = startTime[i];
        arr[i][1] = endTime[i];
        arr[i][2] = profit[i];
    }

    // sort vector arr on the basic of starting time
    sort(begin(arr), end(arr));

    // Call the recursive function to get the result
    return solve(arr, 0);
}

int main() {

    vector<int> startTime;
    startTime.push_back(1);
    startTime.push_back(2);
    startTime.push_back(3);
    startTime.push_back(3);

    vector<int> endTime;
    endTime.push_back(3);
    endTime.push_back(4);
    endTime.push_back(5);
    endTime.push_back(6);

    vector<int> profit;
    profit.push_back(50);
    profit.push_back(10);
    profit.push_back(40);
    profit.push_back(70);

    int result = jobScheduling(startTime, endTime, profit);

    cout << "Output: " << result << endl;
    return 0;
}