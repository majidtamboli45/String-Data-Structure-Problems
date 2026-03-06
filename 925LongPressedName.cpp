#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        
        for (auto &e : emails) {
            string local = "", domain = "";
            int i = 0;
            
            while (e[i] != '@') {
                if (e[i] == '+') {
                    while (e[i] != '@') i++;
                    break;
                }
                if (e[i] != '.') local += e[i];
                i++;
            }
            
            i++; // skip '@'
            
            while (i < e.size()) {
                domain += e[i];
                i++;
            }
            
            s.insert(local + "@" + domain);
        }
        
        return s.size();
    }
};

int main() {
    Solution obj;

    vector<string> emails = {
        "test.email+alex@leetcode.com",
        "test.e.mail+bob.cathy@leetcode.com",
        "testemail+david@lee.tcode.com"
    };

    int result = obj.numUniqueEmails(emails);

    cout << "Number of unique emails: " << result << endl;

    return 0;
}