#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int>arr ;
        for(auto val : nums)
        {
            int mid = arr.size()/2;
            if(nums[mid] == target)
        }
    }
};

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    Solution s;
    arr = s.searchRange(arr, 8);
}
