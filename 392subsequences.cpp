#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
};

int main() {
    string s, t;
    cin >> s >> t;

    Solution sol;
    bool ans = sol.isSubsequence(s, t);

    if (ans)
        cout << "true";
    else
        cout << "false";

    return 0;
}
