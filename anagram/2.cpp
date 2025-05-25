// group of anagram

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<char>arr(26,0);
        map<string,vector<char>>maps;
        vector<vector<char>> str;
        for(auto value : strs)
        {
            for(auto i=0;i<value.size();i++)
            {
                arr[value[i]-'a']++;
            }
            if(!maps.empty() && (maps.find(arr)!=maps.end()))
                maps.insert(value,arr);
            else{
                maps.insert(value,arr);
            }
        }
    }
};

int main()
{
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution s;
    vector<vector<string>> arr;
    arr = s.groupAnagrams(str);
    for (auto val : arr)
        for (auto value : val)
        {
            cout << value << " ";
        }
    cout << endl;
}