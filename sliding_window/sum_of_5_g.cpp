// Greatest of sum of 5 element
#include<iostream>
#include<vector>
using namespace std;


class Arr{
    public:
    int Array(vector<int>arr)
    {
        int a =0;
        for(int i=0;i<5;i++)
        {
            a = arr[i]+a;
        }
        cout<<a<<endl;
        int l=0;
        for(int i=5;i<arr.size();i++)
        {
            a = a+ arr[i]-arr[i-5];
           if(a>l)
           {
                l = a;
           }
        }
        return l;
    }
};
int main()
{
    Arr ar;
    vector<int>arr = {4,5,2,0,1,8,12,3,6,9};
    int a = ar.Array(arr);
    cout<<a<<endl;
}