#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto val : nums)
        {
            if(map.find(val)!=map.end())
            {
                map[val]++;
            }
            else{
                map.insert({val,1});
            }
        }
        for(auto num : map)
        {
            if(num.second == 1)
            {
                return num.first;
            }
        }
        return 1;
    }
};

class Solution1 {
public:
    int singleNumber(vector<int>& nums) {
       int xorr=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        xorr=xorr ^ nums[i];
       } 
       return xorr;
    }
};

int main()
{
    vector<int> arr = {2,2,1};
    Solution s;
    cout<<s.singleNumber(arr);
}