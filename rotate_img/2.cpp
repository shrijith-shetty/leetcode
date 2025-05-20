#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> arr(nums.end() - k + 1, nums.end());
        nums.erase(nums.end() - k + 1, nums.end());
        for (auto i = arr.size() - 1; i >= 0; i--)
            nums.insert(nums.begin(), arr[i]);
        for (auto val : nums)
            cout << val << " ";
    }
};

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    Solution s;
    s.rotate(arr, 3);
}