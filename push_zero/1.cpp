#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[k++] = nums[i];
            }
        }
        while(k<nums.size())
        {
            nums[k++] = 0;
        }
        for(auto in : nums)
            cout<<in<<" ";
    }
};

int main()
{
    vector<int> arr = {0,0,1};
    Solution s;
    s.moveZeroes(arr);
}
