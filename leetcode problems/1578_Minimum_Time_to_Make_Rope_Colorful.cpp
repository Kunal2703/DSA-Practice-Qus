#include<iostream>
using namespace std;

int minCost(string colors, vector<int>& neededTime) {

    int n = colors.size();

    int time = 0;
    int prev = 0;

    for(int i = 0; i < n; i++) {
        if(i > 0 && colors[i] != colors[i-1]) {
            prev = 0;
        }

        int curr = neededTime[i];

        time = time + min(prev, curr);
        prev = max(prev, curr);
    }
    return time;
}

int main() {
    // string colors = "abaac";
    // vector<int> neededTime;
    // neededTime.push_back(1);
    // neededTime.push_back(2);
    // neededTime.push_back(3);
    // neededTime.push_back(4);
    // neededTime.push_back(5);
    
    string colors = "aabaa";
    vector<int> neededTime;
    neededTime.push_back(1);
    neededTime.push_back(2);
    neededTime.push_back(3);
    neededTime.push_back(4);
    neededTime.push_back(1);

    int result = minCost(colors, neededTime);
    cout << result << endl;

    return 0;
}