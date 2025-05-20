#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k=0;
        vector<int> arr(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=0)
                arr[k++]=nums[i];
        }
        for(auto in : arr)
            cout<<in<<" ";
    }
};

int main()
{
    vector<int> arr = {0,1,0,3,12};
    Solution s;
    s.moveZeroes(arr);
}
