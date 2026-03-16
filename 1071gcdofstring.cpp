#include <iostream>
#include <string>
#include <algorithm>   // for __gcd

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        // Check if both strings follow same pattern
        if (str1 + str2 != str2 + str1)
            return "";
        
        int gcdLen = __gcd(str1.length(), str2.length());
        
        return str1.substr(0, gcdLen);
    }
};

int main() {
    
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    Solution obj;
    string result = obj.gcdOfStrings(str1, str2);

    if(result == "")
        cout << "No common divisor string exists" << endl;
    else
        cout << "GCD of Strings: " << result << endl;

    return 0;
}