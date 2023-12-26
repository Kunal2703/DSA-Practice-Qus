#include <iostream>
using namespace std;

int MOD = 1e9 + 7;

int dp[31][1001];

int solve(int n, int k, int target)
{
    // Base case
    //  Base case: if the target becomes negative, no valid way
    if (target < 0)
    {
        return 0;
    }
    // Base case: if there are no more dice left but target is not reached
    if (n == 0 && target != 0)
    {
        return 0;
    }
    // Base case: if there are no more dice left and target is reached
    if (target == 0 && n != 0)
    {
        return 0;
    }
    // Base case: if both dice and target are exhausted, a valid way is found
    if (n == 0 && target == 0)
    {
        return 1;
    }

    // Check if the result for the current state is already computed
    if (dp[n][target] != -1)
    {
        return dp[n][target];
    }

    // Initialize answer for the current state
    int ans = 0;
    // Iterate over each face of the die
    for (int face = 1; face <= k; face++)
    {
        // Update the answer by considering the current face and recursively checking the
        // remaining target
        ans = (ans + solve(n - 1, k, target - face)) % MOD;
    }
    // Memoize the result for the current state
    return dp[n][target] = ans;
}

int numRollsToTarget(int n, int k, int target)
{

    // Set each element of the dp array to -1
    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            dp[i][j] = -1;
        }
    }

    // Call the recursive function to get the result
    return solve(n, k, target);
}

int main()
{
    int result  = numRollsToTarget(1, 6, 3);
    //int result = numRollsToTarget(2, 6, 7);
    //int result = numRollsToTarget(30, 30, 500);
    cout << result << endl;

    return 0;
}
