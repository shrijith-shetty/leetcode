#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if(divisor == dividend) return 1;
        if (dividend <= INT_MIN && divisor == -1)
        {
                return INT_MAX;
        }
        if (divisor == 1)
                return dividend;
        long i = 0;
        long long divi = abs((long long)dividend);
        long long divs = abs((long long)divisor);
        while (divi >= divs)
        {
            divi -= divs;
            i++;
        }
        if (dividend < 0 ^ divisor < 0)
        {
            i = -i;
        }

        return i;
    }
};

int main()
{
    Solution s;
    cout << s.divide(-2147483648, -1);
    cout << endl;
}