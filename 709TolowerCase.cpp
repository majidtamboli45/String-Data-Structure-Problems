#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for(int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Lowercase string: " << obj.toLowerCase(s);

    return 0;
}