#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        vector<string> roman = {"M","CM", "D", "CD", "C", "XC", "L", "XL", "X","IX","V","IV", "I"};
        vector<int> integer = {1000, 900, 500, 400, 100,90, 50, 40, 10, 9, 5,4, 1};
        string output;
        int i = 0;
       
        while (num!=0)
        {
            if ((num - integer[i] )>= 0)
            {
                num = num - integer[i];
                output.append(roman[i]);
            }
            else
            {
                i++;
            }
        }
        return output;
    }
};

int main()
{
    Solution s1;
    int value = 3749;
    string output = s1.intToRoman(value);
    cout << "The roman number of " << value << " is " << output << endl;
}