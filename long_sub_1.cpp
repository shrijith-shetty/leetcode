// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/?envType=daily-question&envId=2025-08-24

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int count = 0;
        int max = 0;
        int start = 0;
        int after_zero = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0 && start == 0)
                start = 1;
            else if (nums[i] == 1 && start > 1)
            {
                ++count;
            }
            else if (nums[i] == 1 && start == 1)
                after_zero++;
            else if (nums[i] == 0 && start == 1)
            {

                if (count > max)
                {
                    max = count;
                    count = after_zero;
                }
                else
                    count = after_zero;
                after_zero = 0;
            }
            else{
                
            }
        }
        return max;
    }
};

int main()
{
    vector<int> arr = {1, 1, 0, 1};
    Solution s;
    cout << s.longestSubarray(arr);
}