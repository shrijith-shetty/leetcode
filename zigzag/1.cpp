#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
    public:
        string convert(string s, int numRows) {
            vector<vector<char>> arr;
            int k = 1;
            int i=0;
           while(i<s.length())
            {
                
                for(int j=0;j<numRows;j++)
                {
                    
                    if(k==1&&(j==0||j==numRows-1))
                    {
                        arr[j].push_back(s[i]);
                    }
                    else{
                        arr[j].push_back(s[i]);
                    }
                    i++;
                }
                k*=-1;
            }
            string arr1;

            for(auto value : arr)
                for(auto res : value)
                {
                    cout<<res<<" ";
                }
                cout<<endl;

            for(auto value : arr)
                for(auto res : value)
                {
                    arr1.push_back(res);
                }
            return arr1;
        }
};

int main()
{
    string s = "PAHNAPLSIIGYIR";
    Solution s1;
    string s2 = s1.convert(s,3);
    for(auto x : s2)
        cout<<x<<" ";
    cout<<endl;
}