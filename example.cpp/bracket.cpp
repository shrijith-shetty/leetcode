#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string arr = "[[2,4],[3,9],[4,5],[2,10]]";
    for (auto i =0 ;i<arr.size();i++)
    {
        if (arr[i] == '[')
            arr[i] = '{';
        else if (arr[i] == ']')
            arr[i] = '}';
    }
    for(auto s : arr)
    {
        cout<<s;
    }
}