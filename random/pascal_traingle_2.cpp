#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int numRows)
    {
        if(numRows==0)
            return {1};
        vector<vector<int>> arr;
        for (int i = 0; i <= numRows; i++)
        {
            vector<int> arr1;
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                {
                    arr1.push_back(1);
                }
                else
                {
                    int sum = arr[i - 1][j - 1] + arr[i - 1][j];
                    arr1.push_back(sum);
                }
            }
            arr.push_back(arr1);
        }
        return arr.back();
    }
};

int main()
{
    Solution s;
    vector<int> arr = s.getRow(1);
    for (auto s : arr)
    {
            cout << s << " ";
    }
}