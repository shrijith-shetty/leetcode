//2264. Largest 3-Same-Digit Number in String

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {

        int n = num.size() - 1;
        int k = 0;
        string str;
        for (int i = 1; i < n; i++) {
            string arr;
            if (num[i] == num[i - 1] && num[i] == num[i + 1]) {
                arr += num[i - 1];
                arr += num[i];
                arr += num[i + 1];
                if (arr > str) {
                    str = arr;
                    k++;
                }
            }
        }
        return str;
    }
};

int main()
{
    Solution s;
    cout<<s.largestGoodInteger("27656754329999");
    
}