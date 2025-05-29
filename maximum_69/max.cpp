#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution1
{
public:
    int maximum69Number(int num)
    {
        int val = 0;
        int count = 0;
        int num1 = num;
        int pos = -1;
        while (num1 != 0)
        {

            int dig = num1 % 10;
            if (dig == 6)
            {
                pos = count;
            }
            count++;
            num1 = num1 / 10;
        }
        if (pos != -1)
        {

            num += (3 * (pow(10, pos)));
        }
        // giving me wrong output but in online compiler i am gettign proper output :
        // if (pos != -1)
        // {
        //     pos-=1;
        //     val = pow(10, pos);
        //     cout<<val<<endl;;
        //     num += (3 * (val));
        // }
        return num;
    }
};
// better solution ;

// class Solution
// {
// public:
//     int maximum69Number(int num)
//     {
//         string nums = to_string(num);
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == '6')
//             {
//                 nums[i] = '9';
//                 break;
//             }
//         }
//         for (auto &c : nums)
//         {
//             if (c == '6')
//             {
//                 c = '9';
//                 break;
//             }
//         }
//         num = stoi(nums);
//         return num;
//     }
// };
int main()
{
    Solution1 s;
    cout << s.maximum69Number(969969);
}