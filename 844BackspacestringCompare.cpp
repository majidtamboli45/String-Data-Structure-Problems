#include <iostream>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();

        string ans = "";
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '#')
            {
                if(!ans.empty())
                    ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }

        string ans1 = "";
        for(int j = 0 ; j < m ; j++)
        {
            if(t[j] == '#')
            {
                if(!ans1.empty())
                    ans1.pop_back();
            }
            else
            {
                ans1.push_back(t[j]);
            }
        }

        return ans == ans1;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    bool result = obj.backspaceCompare(s, t);

    if(result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}