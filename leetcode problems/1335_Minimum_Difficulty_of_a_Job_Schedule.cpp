#include<iostream>
using namespace std;

int dp[301][11];

int solve(vector<int> &jobDifficulty, int n, int idx, int day) {
    if(day == 1) {
        int maxDifficulty = jobDifficulty[idx];
        for(int i = idx; i < n; i++) {
            maxDifficulty = max(maxDifficulty, jobDifficulty[i]);
        }
        return maxDifficulty;
    }
    if(dp[idx][day] != -1) {
        return dp[idx][day];
    }

    int maxDifficulty = jobDifficulty[idx];
    int finalResult = INT_MAX;

    for(int i = idx; i <= n-day; i++) {
        maxDifficulty = max(maxDifficulty, jobDifficulty[i]);

        int result = maxDifficulty + solve(jobDifficulty, n, i+1, day-1);
        finalResult = min(finalResult, result);
    }
    return dp[idx][day] =  finalResult;
}

int minDifficulty(vector<int> &jobDifficulty, int d) {

    int n = jobDifficulty.size();

    if(n < d) {
        return -1;
    }

    // memset(dp, -1, sizeof(dp));
                //OR
    for(int i = 0; i < 301; i++) {
        for(int j = 0; j < 11; j++) {
            dp[i][j] = -1;
        }
    }
    return solve(jobDifficulty, n, 0, d);
}

int main() {
    vector<int> jobDifficulty;

    //Test case: 1
    jobDifficulty.push_back(6);
    jobDifficulty.push_back(5);
    jobDifficulty.push_back(4);
    jobDifficulty.push_back(3);
    jobDifficulty.push_back(2);
    jobDifficulty.push_back(1);

    int d = 2;

    //Test case: 2
    // jobDifficulty.push_back(9);
    // jobDifficulty.push_back(9);
    // jobDifficulty.push_back(9);

    // int d = 4;

    //Test case: 3
    // jobDifficulty.push_back(1);
    // jobDifficulty.push_back(1);
    // jobDifficulty.push_back(1);

    // int d = 3;

    int result = minDifficulty(jobDifficulty, d);

    cout<< "Output: " << result << endl;

    return 0;
}