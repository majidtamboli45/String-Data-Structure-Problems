#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        for(char &c : paragraph) {
            if(isalpha(c))
                c = tolower(c);
            else
                c = ' ';
        }

        string word;
        stringstream ss(paragraph);

        while(ss >> word) {
            if(bannedSet.find(word) == bannedSet.end())
                freq[word]++;
        }

        string result;
        int maxCount = 0;

        for(auto &x : freq) {
            if(x.second > maxCount) {
                maxCount = x.second;
                result = x.first;
            }
        }

        return result;
    }
};

int main() {

    Solution obj;

    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit";
    vector<string> banned = {"hit"};

    string ans = obj.mostCommonWord(paragraph, banned);

    cout << "Most Common Word: " << ans << endl;

    return 0;
}
