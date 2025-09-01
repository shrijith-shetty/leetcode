#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '6')
            {
                str[i] = '9';
                return stoi(str);
            }
        }
        return num;
    }
};

int main()
{
    Solution s;
    cout << s.maximum69Number(9669);
}