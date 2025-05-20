#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> product(vector<int>arr)
    {
        vector<int> prefix(arr.size(),0);
        prefix[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            prefix[i]=arr[i-1]*prefix[i-1];
        }
        int post = 1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            prefix[i] = post*prefix[i];
            post = post*arr[i];
        }
        return prefix;
    }
};

int main()
{
    Solution s;
    // int n;
    // cin>>n;
    vector<int> arr = {4,3,2,1};
    vector<int> arr1 = s.product(arr);
    for(auto num : arr1)
        cout<<num<<" " ;
    cout<<endl;
}