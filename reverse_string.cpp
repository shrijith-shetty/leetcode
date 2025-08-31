#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        for (int i = 0; i < (s.size() / 2); i++)
        {
            char tmp = s[s.size() - i - 1];
            s[s.size() - i - 1] = s[i];
            s[i] = tmp;
        }
        for (auto S : s)
        {
            cout << S << " ";
        }
        cout << endl;
    }
};

int main()
{
   vector<char> str = {'h', 'e', 'l', 'l', 'o'};

    Solution s;
    s.reverseString(str);
}