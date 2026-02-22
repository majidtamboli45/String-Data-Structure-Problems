class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        
        bool allUpper = true;
        for(char c : word) {
            if(!(c >= 'A' && c <= 'Z')) {
                allUpper = false;
                break;
            }
        }
        if(allUpper) return true;
        
        bool allLower = true;
        for(char c : word) {
            if(!(c >= 'a' && c <= 'z')) {
                allLower = false;
                break;
            }
        }
        if(allLower) return true;
        
        if(word[0] >= 'A' && word[0] <= 'Z') {
            for(int i = 1; i < n; i++) {
                if(!(word[i] >= 'a' && word[i] <= 'z')) {
                    return false;
                }
            }
            return true;
        }
        
        return false;
    }
};