#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m = strs.size();
        int n = strs[0].size();
        int deletions = 0;

        for(int col = 0; col < n; col++) {
            for(int row = 1; row < m; row++) {
                if(strs[row][col] < strs[row-1][col]) {
                    deletions++;
                    break;
                }
            }
        }

        return deletions;
    }
};

int main() {
    Solution sol;

    vector<string> strs = {"cba", "daf", "ghi"};

    int result = sol.minDeletionSize(strs);

    cout << "Minimum deletions: " << result << endl;

    return 0;
}
