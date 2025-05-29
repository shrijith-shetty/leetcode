#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// class Solution1 {
// public:
//     int findDuplicate(vector<int>& nums) {
//         if(nums.size()==0)
//             return 0;
//         map<int,int>maps;
//         for(auto num : nums)
//         {
//             if(maps.find(num)!=maps.end())
//                 return num;
//             else{
//                 maps.insert({num,1});
//             }
//         }
//         return 0;       
//     }
// };

class Solution2 {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());   
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }  
        return 0;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);

        fast = nums[0];
        while (slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

int main()
{
    vector<int> arr = {1,2,3,4,3};
    Solution s;
    cout<<s.findDuplicate(arr);
}