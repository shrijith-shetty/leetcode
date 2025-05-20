#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> value(0);
        if (nums.empty())
            return value;
        unordered_map<int, int> map;
        for (auto val : nums)
        {
            if (map.find(val) != map.end())
            {
                map[val]++;
            }
            else
            {
                map.insert({val, 1});
            }
        }

        for (auto val : map)
        {
            if (val.second > (nums.size() / 3))
            {
                value.push_back(val.first);
            }
        }
        return value;
    }
};



int main()
{
    vector<int> arr = { 1};
    Solution s;
    arr =  s.majorityElement(arr);
    for(auto val : arr)
        cout<<val<<" ";
    cout<<endl;
}