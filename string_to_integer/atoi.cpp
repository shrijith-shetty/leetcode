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
        int j = 1;
        int l = 0;
        int k=0;
        while(s[l]==' ')
        {
            l++;
        }
        if (s[l] == '-')
        {
            j = -1;
            l++;
            
            if(s[1]=='0')
            {
                l++;
            }
        }
        long n = 0;
        for (int i = l; i < s.length(); i++)
        {
            if(isalpha(s[i])||s[i]=='-'||s[i]==' ')
                break;
            char k = s[i];
            int c = k - '0';
            n = n * 10 + c;
            if(n>1000000000)
                return j*(numeric_limits<int>::max()+1);
        }
        return n * j;
    }
};

int main()
{
    Solution s;
    string s1 = "-91283472332";
    cout << "Enter the values" << endl;
   //getline(cin, s1);

    int n = s.myAtoi(s1);
    cout << endl
         << n;
}

// #include <iostream>
// #include <limits>
  
// int main() {
//     std::cout << "The maximum value of int is " << std::numeric_limits<int>::max() << std::endl;
//     return 0;
// }
