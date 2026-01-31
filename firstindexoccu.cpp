#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);   // returns index or string::npos
    }
};

int main() {
    string haystack, needle;
    cin >> haystack >> needle;

    Solution sol;
    int ans = sol.strStr(haystack, needle);

    if (ans == string::npos) cout << -1;
    else cout << ans;

    return 0;
}
