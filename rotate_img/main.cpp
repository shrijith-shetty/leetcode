#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> arr;
        if (nums.size() == 1)
        {
        }
        else
        {
            int n = k;
            while (nums.size() <= k)
            {
                n = k - nums.size();
                k = n;
            }
            for (int i = nums.size() - 1; i >= nums.size() - n; i--)
            {
                arr.insert(arr.begin(), nums[i]);
            }
            for (auto i = 0; i < nums.size() - n; i++)
            {
                arr.push_back(nums[i]);
            }
            nums = arr;
        }
        for (auto val : nums)
            cout << val << " ";
    }
};

int main()
{
    vector<int> arr = {1, 2};
    Solution s;
    s.rotate(arr, 5);
}