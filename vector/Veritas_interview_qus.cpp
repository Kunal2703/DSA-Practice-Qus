#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);

    int result = nums[0]*100 + nums[1]*10 + nums[2]*1;

    result += 1;
    
    cout << result << endl;
}