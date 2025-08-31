#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string answer;
        int carry = 0;
        int i=a.size()-1;
        int j =b.size()-1;
        while(i >=0 || j>=0)
        {
            int sum=carry;
        
            if(i>=0)
                sum+=a[i--]+'0';
            if(j>=0)
                sum+=b[j--]+'0';
            answer+=(sum%2)+'0';
            carry+=sum/2;
        }
        if(carry = 1)
            answer += '1';
        reverse(answer.begin(),answer.end());
        return answer;
    }   
};

int main()
{
    string  inp1 = "11";
    string inp2 = "1";
    Solution s1;
    inp1 = s1.addBinary(inp1, inp2);
    cout<<inp1<<endl;

}