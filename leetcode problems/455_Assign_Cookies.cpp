#include <iostream>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    // Sorting the greed factors vector in ascending order
    sort(begin(g), end(g));

    // Sorting the cookie sizes vector in ascending order
    sort(begin(s), end(s));

    // Getting the size of the greed factors vector
    int m = g.size();

    // Getting the size of the cookie sizes vector
    int n = s.size();

    // Initializing pointers i and j to iterate through greed factors and cookie sizes
    // respectively

    int i = 0;
    int j = 0;

    // Looping through both vectors until either one is exhausted
    while (i < m && j < n)
    {

        // Checking if the current cookie size is sufficient to satisfy the current greed factor
        if (g[i] <= s[j])
        {
            // If true, move to the next greed factor
            i++;
        }
        // Move to the next cookie size in any case
        j++;
    }
    // Returning the number of content children, which is the value of pointer i
    return i;
}

int main() {

    // Example 1
    vector<int> greed1;
    greed1.push_back(1);
    greed1.push_back(2);
    greed1.push_back(3);

    vector<int> cookies1;
    cookies1.push_back(1);
    cookies1.push_back(1);
    int result1 = findContentChildren(greed1, cookies1);
    cout << "Example 1: " << result1 << " content child(ren)" << endl;

    // Example 2
    vector<int> greed2;
    greed2.push_back(1);
    greed2.push_back(2);

    vector<int> cookies2;
    cookies2.push_back(1);
    cookies2.push_back(2);
    cookies2.push_back(3);
    int result2 = findContentChildren(greed2, cookies2);
    cout << "Example 2: " << result2 << " content child(ren)" << endl;

    return 0;
}