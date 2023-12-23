#include<iostream>
#include <vector>
#include <set>

using namespace std;

bool isPathCrossing(string path) {
    vector<pair<int, int> > visit;
    int x = 0, y = 0;
    visit.push_back({x, y});

    for(auto it : path) {

        if(it == 'N') {
            y++;
        }
        else if(it == 'S') {
            y--;
        }
        else if(it == 'E') {
            x++;
        }
        else if(it == 'W') {
            x--;
        }

        visit.push_back({x, y});
    }

    set<pair<int, int> > s;
    s.insert(visit.begin(), visit.end());

    if(visit.size() == s.size()) {
        return false;
    }
    else {
        return true;
    }
}

int main() {

    string path = "NESWW";
    bool result = isPathCrossing(path);
    if(result) {
        cout << "The path crosses itself." << endl;
    } 
    else {
        cout << "The path does not cross itself." << endl;
    }
    return 0;
}