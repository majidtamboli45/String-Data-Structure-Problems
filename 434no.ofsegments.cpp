#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int segment = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
            {
                segment++;
            }
        }
        
        return segment;
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);   // To take full line input including spaces

    int result = sol.countSegments(input);

    cout << "Number of segments (words): " << result << endl;

    return 0;
}