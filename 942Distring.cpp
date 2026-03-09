#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0;
        int high = s.length();
        vector<int> result;

        for(char c : s) {
            if(c == 'I') {
                result.push_back(low);
                low++;
            }
            else {
                result.push_back(high);
                high--;
            }
        }

        result.push_back(low); // last remaining number
        return result;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter string (I/D): ";
    cin >> s;

    vector<int> ans = obj.diStringMatch(s);

    cout << "Result permutation: ";
    for(int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}