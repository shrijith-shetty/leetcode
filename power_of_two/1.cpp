#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (auto i = 0; i < (sqrt(n) + 2); i++)
        {
            if (pow(2, i) == n)
                return true;
        }
        return false;
    }
};

int main()
{
    int output = 16;
    Solution s;
    cout << s.isPowerOfTwo(output);
}