#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for(char s : stones)
        {
            for(char j : jewels)
            {
                if(s == j)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution obj;

    string jewels, stones;

    cout << "Enter jewels string: ";
    cin >> jewels;

    cout << "Enter stones string: ";
    cin >> stones;

    int result = obj.numJewelsInStones(jewels, stones);

    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}
