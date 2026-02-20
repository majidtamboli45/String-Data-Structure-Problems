#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;

        for(char c : s)
        {
            result ^= c;
        }

        for(char c : t)
        {
            result ^= c;
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    char extra = obj.findTheDifference(s, t);

    cout << "The extra character is: " << extra << endl;

    return 0;
}