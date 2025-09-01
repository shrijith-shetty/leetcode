#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        set<int>st;
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int num : nums)
            st.insert(num);  
        if(st.size()<3)
            return *st.rbegin();
        //if there are fewer than 3 values then it send greatest value;
        auto it = st.rbegin();
        //other wise third value
        advance(it,2);
        return *it;
    }
};

int main()
{
    vector<int> arr = {1,2};
    Solution s;
    cout << s.thirdMax(arr);
}