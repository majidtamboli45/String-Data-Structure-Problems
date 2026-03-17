#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }

    string reverseVowels(string s) {
        int st = 0;
        int end = s.size() - 1;

        while (st < end) {
            if (!isVowel(s[st])) {
                st++;
            }
            else if (!isVowel(s[end])) {
                end--;
            }
            else {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter a string: ";
    cin >> s;          // use getline(cin, s) for spaces

    string result = sol.reverseVowels(s);
    cout << "String after reversing vowels: " << result << endl;

    return 0;
}
