#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        if (find(nums.begin(), nums.end(), 0) != nums.end())
            return false;
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {2, 3, 1, 1, 4};
    cout << s.jump(arr) << endl;
}
