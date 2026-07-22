#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isAlphaNum(char ch)
    {
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while(st < end)
        {
            if(!isAlphaNum(s[st]))
            {
                st++;
                continue;
            }
            if(!isAlphaNum(s[end]))
            {
                end--;
                continue;
            }

            if (tolower(s[st]) != tolower(s[end]))
            {
                return false;
            }

            st++;
            end--;
        }
        return true;
    }
};

int main()
{
    Solution obj;

    string s = "race a car";   // fixed string (no user input)

    if(obj.isPalindrome(s))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
