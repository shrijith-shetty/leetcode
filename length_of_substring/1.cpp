#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        string s1; 
        // s1.insert(0,1,s[0]);
        int i=0;
        int k=0;
        int n=s.length();
        cout<<endl<<n<<endl;
        for(i=0;i<n;i++)
        {
            bool l=0;
            for(int j=0;j<s1.length();j++)
            {
                if(s1[j]!=s[i])
                {
                    l =1;
                }
            }
            if(l==1)
            {
                k++;
            }
        }  
        cout<<endl<<s1<<endl;
        return (k); 
    }
};

int main()
{
    Solution s;
    string s1;
    cout<<"Enter the string"<<endl;
        getline(cin,s1);
    int value = s.lengthOfLongestSubstring(s1);
    cout<<"The substring length is: "<<value<<endl;
}
