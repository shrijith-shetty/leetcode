// 1792. Maximum Average Pass Ratio
// https://leetcode.com/problems/maximum-average-pass-ratio/description/?envType=daily-question&envId=2025-09-01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    double maxAverageRatio(vector<vector<int>> &classes, int extraStudents)
    {
        int diff = 9999;
        int max = 0;
        for (int i = 0; i < classes.size(); i++)
        {
            int var = classes[i][1] - classes[i][0];
            //cout<<var<<endl;
            if (diff > var && var != 0)
            {
                diff = var;
                max = i;
                //cout<<max<<endl;
            }
        }
        // cout<<max<<endl;
        classes[max][0] += extraStudents;
        classes[max][1] += extraStudents;

        double sum = 0;
        for (int i = 0; i < classes.size(); i++)
        {
            // cout<<endl<<classes[i][0]<<" "<<classes[i][1]<<endl;
            double var = (double)classes[i][0] / classes[i][1];
            // cout<<var<<endl;
            sum += var;
        }
        // cout<<sum;
        // cout<<classes.size()<<endl;
        return sum / classes.size();
    }
};

int main()
{
    vector<vector<int>> arr = {{2,4},{3,9},{4,5},{2,10}};
    Solution s;
    cout << s.maxAverageRatio(arr, 2);
}