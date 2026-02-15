#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[idx++] = ch;
            if (count > 1) {
                string str = to_string(count);
                for (char dig : str)
                    chars[idx++] = dig;
            }
            i--;
        }

        chars.resize(idx);
        return idx;
    }
};

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    Solution obj;
    int len = obj.compress(chars);

    cout << "Compressed Length: " << len << endl;
    cout << "Compressed String: ";
    for (char c : chars) cout << c;
    cout << endl;

    return 0;
}
