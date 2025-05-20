//longest subarray less than 15

#include<iostream>
#include<vector>
using namespace std;

class Long{
    public:
    void Array(vector<int> arr){
        int a=0;
        int p=-1;
        int s = 15;
        cout<<"iteration"<<"\t"<<"sum"<<endl;
        for(int i=0;i<arr.size();i++)
        {
            a += arr[i];
            while(a>s)
            {
                p++;
                a -=arr[p];
            }
            cout<<i<<"\t\t"<<a<<endl;
        }
    }
};

int main(void)
{
    Long k;
    vector<int>arr = {4,5,2,0,1,8,12,3,6,9};
    k.Array(arr);
  
}