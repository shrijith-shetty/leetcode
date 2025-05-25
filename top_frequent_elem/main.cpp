#include <iostream>
#include <unordered_map>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        if (nums.size() == k)
            return nums;
        unordered_map<int, int> map;
        vector<int> arr;
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
            if (val.second > k)
                arr.push_back(val.first);
        }
        sort(arr.begin(),arr.end());
        while(arr.size()!=k)
        {
            arr.erase(arr.begin(),arr.end());
        }

        return arr;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 0, 3, 0};
    arr = s.topKFrequent(arr, 2);
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
}