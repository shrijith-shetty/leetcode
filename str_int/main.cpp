#include <iostream>
#include <string>
#include <climits>

using namespace std;
class Solution
{
public:
    string multiply(string num1, string num2)
    {

        if (num1 == "0" || num2 == "0")
            return "0";
        int input1 = stoi(num1);
        int input2 = stoi(num2);
        ;
        if (input1 >= INT_MAX || input2 >= INT_MAX)
            return "INT_MAX";
        int num3 = input1 * input2;
        string num;
        while (num3 > 0)
        {
            int mod = num3 % 10;
            char c = '0' + mod;
            num.insert(num.begin(), c);
            num3 /= 10;
        }
        return num;
    }

    int stoi(string num)
    {
        int value = 0;
        for (int i = 0; i < num.length(); i++)
        {
            value = value * 10 + (num[i] - '0');
        }
        return value;
    }
};

int main()
{
    Solution s;
    cout << s.multiply("123", "456");
}