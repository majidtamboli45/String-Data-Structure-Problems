#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        
        // Count frequency of each character
        for(char c : s) {
            freq[c]++;
        }
        
        int length = 0;
        bool oddFound = false;
        
        for(auto &it : freq) {
            int count = it.second;
            
            if(count % 2 == 0) {
                length += count;
            } 
            else {
                length += count - 1;
                oddFound = true;
            }
        }
        
        if(oddFound)
            length += 1;
        
        return length;
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    Solution obj;
    int result = obj.longestPalindrome(s);

    cout << "Length of the longest palindrome that can be built: " << result << endl;

    return 0;
}