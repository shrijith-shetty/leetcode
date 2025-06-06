#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main()
{
    int output = 16;
    Solution s;
    cout << s.isPowerOfTwo(output);
}