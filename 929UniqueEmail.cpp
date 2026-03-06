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
    int n;
    cout << "Enter number of emails: ";
    cin >> n;

    vector<string> emails(n);
    cout << "Enter emails:\n";
    for (int i = 0; i < n; i++) {
        cin >> emails[i];
    }

    Solution obj;
    int result = obj.numUniqueEmails(emails);

    cout << "Number of unique emails: " << result << endl;

    return 0;
}