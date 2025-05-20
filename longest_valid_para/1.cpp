#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int k = 0;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            cout<<k<<endl;
            if (i > 1 && ((s[i] == '(' && s[i - 1] == '(') || (s[i] == ')' && s[i - 1] == ')')))
            {
                if (k + 1 > s.size() - k)
                    return k + 1;
                else
                    return (s.size() - (k+1));
            }
            if (!st.empty() && s[i] == ')' && st.top() == '(')
            {
                st.pop();
                k--;
            }
            else
            {
                st.push(s[i]);
                k++;
            }
        }
        int a = s.size() - k;
        return a;
    }
};

int main()
{
    string str = "()(())";
    Solution s;
    cout << s.longestValidParentheses(str);
}