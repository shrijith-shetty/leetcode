#include <iostream>
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";
        __int128 input1 = stoi(num1);
        __int128 input2 = stoi(num2);
        __int128 in = (long long)(input1 * input2);
        unsigned int num3 = input1 * input2;
        string num;
        while (num3 > 0) {
            int mod = num3 % 10;
            char c = '0' + mod;
            num.insert(num.begin(), c);
            num3 /= 10;
        }
        return num;
    }

    int stoi(string num) {
        int value = 0;
        for (int i = 0; i < num.length(); i++) {
            value = value * 10 + (num[i] - '0');
        }
        return value;
    }
};

int main()
{
    Solution s;
    string arr;
    arr = s.multiply("987654321", "123456789");
    cout << arr;
}