#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0;
        int minimum = 32000;

        for(auto val : prices)
        {
            minimum = min(minimum, val);
            int value = val-minimum;
            maximum = max(maximum, value);
        }
        return maximum;
    }
};

int main()
{
    vector<int> arr={2,1,4};
    Solution s;
    cout<<s.maxProfit(arr);
}