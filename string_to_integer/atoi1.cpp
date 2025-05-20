#include <iostream>
#include <string>
#include<climits>
#include<algorithm>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        int i=0;
        while(i<s.length()&&s[i]==' ')
        {
            i++;
        }
        int neg = 1;
        if(s[i]=='-'||s[i]=='+')
        {
            if(s[i]=='-')
                neg = -1;
            i++;
        }
        long result= 0;
       
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int integer = s[i]-'0';
                result = (result*10) + integer;
                if(neg==1&&result>INT_MAX)
                    return INT_MAX;
                if(neg==-1 && -result<INT_MIN)
                    return INT_MIN;
                i++;
            }
            else{
                return result*neg;
            }
            
        }
        return result*neg;
    }
};

int main()
{
    Solution s;
    string s1 = "-91283472332";
    //cout << "Enter the values" << endl;
   //getline(cin, s1);

    int n = s.myAtoi(s1);
    cout << endl
         << n;
}

                // cout<<endl<<"result"<<result<<endl;
                // cout<<endl<<"inc"<<inc<<endl;
                // cout<<endl<<"integer"<<integer<<endl;