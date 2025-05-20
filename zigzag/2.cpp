#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if(numRows == 1)
            return s;
        vector<vector<char>> arr(numRows);
        int d = -1;
        int j = 0;
        for (auto i = 0; i < s.length(); i++)
        {
            if (j == 0 || j == numRows - 1)
                d *= -1;
            arr[j].push_back(s[i]);
            j += d;
        }
        string arr1;
        for (int i = 0; i < numRows; i++)
        {
            for (char c : arr[i])
            {
                arr1.push_back(c);
            }
        }

        return arr1;
    }
};

int main()
{
    string s = "PAYPALISHIRING";
    Solution s1;
    // vector<char> s2 = s1.convert(s, 3);
    string s2 = s1.convert(s,4);

    for (auto x : s2)
        cout << x << " ";
    cout << endl;
}