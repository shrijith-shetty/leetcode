#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int count=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == ' ' && s[i+1]!=' ')
                count++;
        }
        if(s.size()>0 && s[0]!=' ')
            count++;
        return count;
    }
};

int main()
{
    string str = "hello, my name and you";
    Solution s;
    cout<<s.countSegments(str);
}