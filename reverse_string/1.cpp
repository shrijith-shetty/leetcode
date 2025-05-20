#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        string str;
        string in;
        while (!s.empty() && *s.begin() == ' ')
            s.erase(s.begin());
        while (!s.empty() && *s.end() == ' ')
            s.erase(s.end());
        for (int i = 0; i < s.size(); i++)
        {
            in.insert(in.begin(), s[i]);
            if (s[i] == ' ' || i == s.size() - 1)
            {
                for (auto val : in)
                {
                    if (val == ' ')
                        continue;
                    str.insert(str.begin(), val);
                }
                if (s[i] == ' ')
                    str.insert(str.begin(), ' ');
                in.clear();
            }
        }
        return str;
    }
};

int main()
{
    Solution s;
    string str = "  hello world  ";
    cout << s.reverseWords(str);
}