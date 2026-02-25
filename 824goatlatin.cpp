#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

class Solution {
public:

    bool isVowel(char ch) 
    {
        ch = tolower(ch); 
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string result = "";
        int index = 1;

        while (ss >> word) {
            if (isVowel(word[0])) {
                word += "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }

            word += string(index, 'a');
            result += word + " ";
            index++;
        }

        result.pop_back();
        return result;
    }
};

int main() {
    Solution obj;
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = obj.toGoatLatin(sentence);

    cout << "Goat Latin: " << result << endl;

    return 0;
}