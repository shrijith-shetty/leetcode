#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int numb1=0;
        int numb2=0;
        for(auto i=0;i<num1.size();i++)
        {
            int num = num1[i]-'0';
            numb1 = numb1*10+num;
        }
        for(auto i=0;i<num2.size();i++)
        {
            int num = num2[i]-'0';
            numb2 = numb2*10+num;
        }
        long long num3 = numb1*numb2;
        
        string str;
        str = num3+'0';
        return str;

    }
};

int main()
{
    Solution s;
    cout <<endl<< s.multiply("30", "3");
}


// int i=1;
// int mul=0;
// while(num3>0)
// {
//     int rem = num3%10;
//     mul =(i*rem)+mul;
//     i=i*10;
//     num3=num3/10;
// }