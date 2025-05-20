#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if(s.length()!=t.length())
            return false;
        vector<int> arr(26, 0);
        vector<int> arr1(26,0);
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]-'a']++;
            arr1[t[i]-'a']++;
        }
        if(arr!=arr1)
            return false;
        return true;
    }
};

int main()
{
    string s = "eat";
    string t = "tea";
    Solution sol;
    cout << sol.isAnagram(s, t);
}