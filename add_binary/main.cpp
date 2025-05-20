#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string output;
        int n = a.size();
        int m = b.size();
        int j =0;
        int i =0;
        int carry =0;
        while(n>=0|| m>=0);
        {
            int c = a[n]-'0';
            int d = a[m]-'0';
            int e = c+d+carry;
            carry =0;
            if(e >= 2)
            {
                output.insert(output.begin(), '0');
                carry = 1;
            }else{
                output.insert(output.begin(), (e+'0'));
            }
            n--;
            m--;
        }
        if(carry == 1)
            output.insert(output.begin(),'1');
        return output;
    }
};

int main()
{
    Solution s;
    cout<<s.addBinary("11","1")<<endl;
}