#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        if(numRows==0)
            return {};
        if(numRows==1)
            return {{1}};
        vector<vector<int>> arr;
        for (int i = 0; i < numRows; i++)
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
        return arr;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> arr = s.generate(30);
    for (auto s : arr)
    {
        for (auto val : s)
            cout << val << " ";
        cout << endl;
    }
}