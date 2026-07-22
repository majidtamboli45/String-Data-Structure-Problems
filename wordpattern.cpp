#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp;

        // Split string s into words
        for (char c : s) {
            if (c == ' ') {
                words.push_back(temp);
                temp.clear();
            } else {
                temp += c;
            }
        }
        words.push_back(temp);

        // Length mismatch
        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        // Check bijection between pattern and words
        for (int i = 0; i < pattern.size(); i++) {
            char p = pattern[i];
            string w = words[i];

            if (mp1.count(p) && mp1[p] != w)
                return false;

            if (mp2.count(w) && mp2[w] != p)
                return false;

            mp1[p] = w;
            mp2[w] = p;
        }
        return true;
    }
};

int main() {
    Solution sol;

    string pattern, s;
    cout << "Enter pattern: ";
    cin >> pattern;

    cin.ignore(); // clear newline
    cout << "Enter string: ";
    getline(cin, s);

    if (sol.wordPattern(pattern, s))
        cout << "True: The string follows the given pattern." << endl;
    else
        cout << "False: The string does NOT follow the given pattern." << endl;

    return 0;
}
