// maximum_unique_subarry_sum_after_deletion

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        bool a = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if ((i == 0 || nums[i] > nums[i - 1]) && nums[i] >= 0)
            {
                a =1;
                sum += nums[i];
            }
            if (sum == 0 && nums[i] < 0 && a!=1)
                sum += nums[i];
        }
        return sum;
    }
};

int main()
{
    vector<int> arr = {-15,0};
    Solution s;
    cout << s.maxSum(arr) << endl;
}