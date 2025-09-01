#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countHillValley(vector<int> &array)
    {
        vector<int> nums;
        int count = 0;

        nums.push_back(array[0]);

        for (int i = 1; i < array.size(); i++)
        {
            if (array[i] != array[i - 1])
                nums.push_back(array[i]);
        }

        if (nums.size() < 3)
            return 0;

        for (int i = 1; i < nums.size() - 1; i++)
        {
            if ((nums[i] > nums[i + 1] && nums[i] > nums[i - 1]) ||
                (nums[i] < nums[i + 1] && nums[i] < nums[i - 1]))
                count++;
        }

        return count;
    }
};

int main()
{
    vector<int> arr = {2, 4, 1, 1, 6, 5, 1};
    Solution s1;
    cout << s1.countHillValley(arr);
}
