#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > findMatrix(vector<int>& nums) {

    int n = nums.size();

    unordered_map<int, int> mp;

    vector<vector<int> > result;

    for(int i = 0; i < n; i++) {
        int freq = mp[nums[i]];

        if(freq == result.size()) {
            //result.push_back({});
            result.push_back(vector<int>());
        }
        result[freq].push_back(nums[i]);
        mp[nums[i]]++;
    }
    return result;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    vector<vector<int> > result;
    result = findMatrix(nums);

    cout << "Output: "<< endl;
    for(const vector<int> &row: result) {
        for(int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
