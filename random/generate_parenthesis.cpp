#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
private:
    void generate(vector<string> &result, int n, int open, int close, string str)
    {
        if (str.length() == 2 * n)
        {
            result.push_back(str);
            return;
        }
        if (open < n)
            generate(result, n, open + 1, close, str + "(");
        if (close < open)
            generate(result, n, open, close + 1, str + ")");
    }

public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> result;
        generate(result, n, 0, 0, "");
        return result;
    }
};

int main()
{
    Solution s;
    vector<string> arr = s.generateParenthesis(3);
    for (auto s : arr)
        cout << s << " ";
}