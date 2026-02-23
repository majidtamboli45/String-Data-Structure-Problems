#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.length(); i += 2 * k) {
            reverse(s.begin() + i, s.begin() + min(i + k, (int)s.length()));
        }
        return s;
    }
};

int main() {
    string s;
    int k;

    cin >> s;
    cin >> k;

    Solution sol;
    cout << sol.reverseStr(s, k);

    return 0;
}