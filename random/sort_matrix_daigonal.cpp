#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {

            vector<int> arr;
            for (int j = 0; (j + i) < n; j++)
            {
                arr.push_back(grid[i + j][j]);
            }
            sort(arr.begin(), arr.end(), greater<int>());
            for (int j = 0; (j + i) < n; j++)
            {
                grid[i + j][j] = arr[j];
            }
        }
        for (int j = 1; j < n; j++)
        {
            vector<int> arr;
            for (int i = 0; (j + i) < n; i++)
            {
                arr.push_back(grid[i][i + j]);
            }
           sort(arr.begin(), arr.end());
            for (int i = 0; (j + i) < n; i++)
            {
                grid[i][i + j] = arr[i];
            }
        }
        return grid;
    }
};

int main()
{
    vector<vector<int>> arr = {{1,7,3},{9,8,2},{4,5,6}};
    Solution s;
    arr = s.sortMatrix(arr);
    for (auto val : arr)
    {
        for (auto dig : val)
        {
            cout << dig << " ";
        }
        cout << endl;
    }
}