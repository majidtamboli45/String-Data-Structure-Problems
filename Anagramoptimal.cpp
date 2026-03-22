#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        for (char c : t)
            freq[c - 'a']--;

        for (int count : freq)
            if (count != 0)
                return false;

        return true;
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
