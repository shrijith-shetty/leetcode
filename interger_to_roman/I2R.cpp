#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        map<int, char> rom = {{1, 'I'}, {2, 'II'}, {3, 'III'}, {5, 'V'}, {10, 'X'}, {50, 'L'}, {100, 'C'}, {500, 'D'}, {1000, 'M'}};
        string s;
        int n = num;
        int i = 1;
        while (n > 0)
        {

            int t = n % 10;
            int n = n / 10;

            if (t == 4 || t == 9)
            {
                int j = t + 1;
                int a = j - t;
                for (int k = 0; k < 9; k++)
                {
                    if (a == rom.begin)
                    {
                        s.insert(a);
                    }
                    if (j == rom.begin)
                    {
                        s.insert(j);
                    }
                }
            }
            else if (t > 5)
            {
                int k = t - 5;
                int j = k;
                t *= i;
                s.insert(j.second);
                for (int i = 0; i < j; i++)
                {
                    s.insert(k.second)
                }
            }
            else
            {
                int k = t;
                t = 1* i;
                for(int i=0;i<k;i++)
                {
                    s.insert(t.second);
                }
            }
        }
    }
};

int main()
{
    int n;
    cout << "Enter the symbol\n";
    cin >> n;
    Solution s;
    string ans = s.intToRoman(n);
    cout << endl
         << "The answer : " << ans << endl;
}