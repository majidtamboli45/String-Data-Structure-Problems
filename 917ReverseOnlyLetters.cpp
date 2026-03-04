#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isalphanumeric(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;

        while(left < right)
        {
            if(!isalphanumeric(s[left]))
            {
                left++;
                continue;
            }

            if(!isalphanumeric(s[right]))
            {
                right--;
                continue;
            }

            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
    }
};

int main()
{
    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    string result = obj.reverseOnlyLetters(s);

    cout << "Output: " << result << endl;

    return 0;
}