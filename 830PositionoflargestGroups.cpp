#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> result;
        int n = s.size();
        int start = 0;

        for (int i = 1; i <= n; i++) {
            if (i == n || s[i] != s[i - 1]) {
                if (i - start >= 3) {
                    result.push_back({start, i - 1});
                }
                start = i;
            }
        }

        return result;
    }
};

int main() {
    string s = "abbxxxxzzy";

    Solution obj;
    vector<vector<int>> result = obj.largeGroupPositions(s);

    cout << "Large Group Positions:" << endl;
    for (auto &group : result) {
        cout << "[" << group[0] << ", " << group[1] << "]" << endl;
    }

    return 0;
}