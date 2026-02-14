#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(), s.end());

        string ans = "";
        int i = 0;

        while (i < n) {
            string word = "";

            while (i < n && s[i] == ' ')
                i++;

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if (!word.empty()) {
                if (!ans.empty()) ans += " ";
                ans += word;
            }
        }
        return ans;
    }
};

int main() {
    string s;
    getline(cin, s);

    Solution obj;
    cout << obj.reverseWords(s);

    return 0;
}
