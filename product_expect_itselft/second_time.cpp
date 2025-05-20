#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> arr(nums.size(), 0);
        arr[0] = 1;
        for (int i = 1; i < nums.size(); i++)
            arr[i] = arr[i - 1] * nums[i - 1];
        int post = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            arr[i] = post * arr[i];
            post = post * nums[i];
        }
        return arr;
    }
};
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Solution s;
    arr = s.productExceptSelf(arr);
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
}