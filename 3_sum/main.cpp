#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        if(nums.size()<3)
            return 0;
        if(nums.size()==3)
            return nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        int minimum = 9999;
        int output = 0;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int q = i + 1;
            int p = nums.size() - 1;
            while (q < p)
            {
                int sum = nums[i] + nums[p] + nums[q];
                int mini = abs(target - sum);
                if (minimum > mini)
                {
                    minimum = mini;
                    output = sum;
                }
                if (sum == target)

                    return sum;

                else if (sum > target)
                    p--;
                else
                    q++;
            }
        }
        return output;
    }
};

int main()
{
    vector<int> arr = {-1000, -1000, -1000};
    Solution s;
    cout << s.threeSumClosest(arr, 1);
}