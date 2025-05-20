#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0;
        int j = 0;
        vector<int> arr;
        while (i < m || j < n)
        {
            if ((j == n || nums1[i] < nums2[j]) && i < m)
            {
                arr.push_back(nums1[i++]);
            }
            else
            {
                arr.push_back(nums2[j++]);
            }
        }
        for (auto val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;           // Index of last element in nums1's valid part
//         int j = n - 1;           // Index of last element in nums2
//         int k = m + n - 1;       // End of nums1's full size

//         // Start filling from the back
//         while (j >= 0) {
//             if (i >= 0 && nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }

//          for (auto val : nums1)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// };

int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    Solution s;
    s.merge(arr1, 3, arr2, 3);
}