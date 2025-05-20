#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        if(nums.empty())
            return 0;
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
        int max = 0;
        int value = 0;
        for (auto val : map)
        {
            if (val.second > max)
            {
                max = val.second;
                value = val.first;
            }
        }
        return value;
    }
};

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2,1,1};
    Solution s;
    cout << s.majorityElement(arr);
    cout << endl;
}