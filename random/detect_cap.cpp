#include <iostream>
#include <string>
#include<cctype>
using namespace std;

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        string str = word;
        transform(str.begin(),str.end(),str.begin(), toupper);
        if(str==word)
            return true;
        return false;
    }
};

int main()
{
    string str = "FlaG";
    Solution s;
    cout<<s.detectCapitalUse(str);
}