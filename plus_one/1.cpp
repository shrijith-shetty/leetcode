#include <iostream>
#include <limits>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        unsigned long long bits = 0;
        for (auto val : digits)
        {
            bits = bits * 10 + val;
        }
        ++bits;
        cout << bits;
        vector<int> arr1;
        while (bits)
        {
            int val = bits % 10;
            arr1.insert(arr1.begin(), val);
            bits = bits / 10;
        }
        return arr1;
    }
};

int main()
{
    vector<int> arr = {7, 2, 8, 5, 0, 9, 1, 2, 9, 5, 3, 6, 6, 7, 3, 2, 8, 4, 3, 7, 9, 5, 7, 7, 4, 7, 4, 9, 4, 7, 0, 1, 1, 1, 7, 4, 0, 0, 6};
    Solution s;
    arr = s.plusOne(arr);
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}