#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        map<char, string> map = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        vector<string> arr;
        arr.push_back("");
        for (auto digit : digits)
        {
            vector<string> temp;
            for (auto comb : arr)
            {
                for (auto letter : map[digit])
                    temp.push_back(comb + letter);
            }
            for (auto val : temp)
                cout << val << " ";
            cout << endl;
            arr = temp;
        }

        for (auto val : arr)
            cout << val << " ";
    }
};

int main()
{
    Solution s;
    s.letterCombinations("232");
}