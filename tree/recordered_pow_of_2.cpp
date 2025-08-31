#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:

    string givensort(int x)
    {
        string var = to_string(x);
        sort(var.begin(),var.end());
        return var;
    }
    bool reorderedPowerOf2(int n) {
        string str = givensort(n);
        for(int i=0;i<31;i++)
        {
            if(givensort(1<<i) == str) return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    cout<<s.reorderedPowerOf2(1);
}