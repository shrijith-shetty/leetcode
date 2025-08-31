#include <iostream>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if(n==0 || n==1)
            return 1;
        climbStairs(n - 1);
        climbStairs(n - 2);
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

int main()
{
    int num = 35;
    Solution s;
    cout << s.climbStairs(num);
}