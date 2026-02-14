#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (sol.isAnagram(s, t))
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;

    return 0;
}
