#include<iostream>
using namespace std;

int main()
{
    int n = 14;
    while(n%4==0)
    {
        n/=4;
    }
    if(n==1)    
        cout<<"true"<<endl;
    else  
        cout<<"false"<<endl;
}