#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string key = strs[0];
        if (strs.size() == 1)
            return key;
        string output;
        int i = 0;
        while (1)
        {
            if (i >= key.size())
                break;
            for (auto &word : strs)
            {
                if (i >= word.size() || key[i] != word[i])
                   return output;
            }
            output.push_back(key[i]);
            i++;
        }
        return output;
    }
};

int main()
{
    Solution s;
    vector<string> arr = {"flower", "flow", "flight"};
    string output = s.longestCommonPrefix(arr);

    for (auto c : output)
        cout << c;
    cout << endl;
}

//"flower","flow","flight"