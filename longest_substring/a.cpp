#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char,int> arr;
        int maxlenth=0,left=0;
        for(int right =0;right<s.length();right++)
        {
            if(arr.find(arr[right])!=arr.end())
            {
                left = max(left,arr[s[right]]);
            }
            arr[s[right]] = s[right];
            maxlenth = max(maxlenth, right-left+1);
        }
        return maxlenth;
    }
};

int main()
{
    Solution s;
    string input = "abcdabcbb";
    cout << s.lengthOfLongestSubstring(input);
    cout << endl;
}