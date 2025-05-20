#include<iostream>
#include<map>
#include<stack>
#include<string>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            map<char,int> p = {
                {'[',-1},{']',1},
                {'{',-2},{'}',2},
                {'(',-3},{')',3}
            };
            stack<char> st;
            for(auto str : s)
            {
                
                if(!st.empty()&&(p[st.top()] + p[str])==0)
                {
                    st.pop();
                }
                else if(p[str]<0){
                        st.push(str);
                }
                else{
                    return false;
                }

            }
            if(st.empty())
            {
                return true;
            }
            return false;
        }
    };
int main()
{
    Solution s1;
    string s = "([}}])";
    if(s1.isValid(s))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    cout<<endl;
}