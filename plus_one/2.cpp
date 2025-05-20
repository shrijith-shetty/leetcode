#include <iostream>
#include <limits>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] <= 8)
            {
                digits[i]++;
                return digits;
            }
            if (i == 0 && digits[i] == 9)
            {
                digits.insert(digits.begin(),{1});
                digits[i+1] = 0;
                return digits;
            }
            digits[i] = 0;
        }

        return digits;
    }
};

int main()
{
    vector<int> arr{7, 2, 8, 5, 0, 9, 1, 2, 9, 5, 3, 6, 6, 7, 3, 2, 8, 4, 3, 7, 9, 5, 7, 7, 4, 7, 4, 9, 4, 7, 0, 1, 1, 1, 7, 4, 0, 0, 6};
    vector<int> arr1 = {9, 9};

    Solution s;
    arr = s.plusOne(arr1);
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}