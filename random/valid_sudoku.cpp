#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<string> str;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    // int block = 3 * (i / 3) + (j / 3);
                    string row = string(1, board[i][j]) + "_ROW_" + to_string(i);
                    string col = string(1, board[i][j]) + "COL_" + to_string(j);
                    string box = string(1, board[i][j]) + "_BOX_" + to_string(i / 3) + to_string((j / 3));

                    if (str.find(row) != str.end() || str.find(col) != str.end() || str.find(box) != str.end())
                        return false;
                    str.insert(row);
                    str.insert(col);
                    str.insert(box);
                }
            }
        }
        return true;
    }
};

int main()
{
    vector<vector<char>> arr = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'5', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution s;
    cout << s.isValidSudoku(arr);
}