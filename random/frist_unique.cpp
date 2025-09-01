#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> count;
        int n=s.length();
        for (int i = 0; i < n; i++)
        {
            count[s[i]]++;
        }
        int val = 0;
        for (int i = 0; i < n; i++)
           if (count[s[i]] == 1)
                return i;
        return -1;
    }
};

int main()
{
    string s1 = "dddccdbba";
    Solution s;
    cout << s.firstUniqChar(s1);
}