#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(4);

    int result = numbers[0] * 100 + numbers[1] * 10 + numbers[2];
    result += 1;
    cout << result << endl;

    return 0;
}
