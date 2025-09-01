#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int countSquares(vector<vector<int>> &matrix)
    {
        //better time complexity
        // if(matrix.size()==0 && matrix[0].size()==0)
        //     return 0;

        //(matrix.size(), vector<int>(matrix[0].size(), 0))
        vector<vector<int>> sec(matrix.size(), vector<int>(matrix[0].size(), 0));
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (i == 0 || j == 0)
                    sec[i][j] = matrix[i][j];
                else if (matrix[i][j] == 0)
                    sec[i][j] = 0;
                else
                    sec[i][j] = min(min(sec[i][j - 1], sec[i - 1][j - 1]), sec[i - 1][j]) + 1;
            }
        int result = 0;
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
            {
                result += sec[i][j];
            }
        return result;
    }
};
int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}};

    Solution s;
    cout << s.countSquares(matrix);
}