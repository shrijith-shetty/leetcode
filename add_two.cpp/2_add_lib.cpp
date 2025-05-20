
#include <vector>
#include<algorithm>

using namespace std;

class ListNode
{
public:
    long val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
};
class Solution01
{
public:
    void create(vector<int> arr, ListNode *&head)
    {
        ListNode *last = nullptr;
        reverse(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            ListNode *t = new ListNode();
            t->val = arr[i];
            t->next = nullptr;
            if (!head)
            {
                head = t;
            }
            else
            {
                last->next = t;
            }
            last = t;
        }
    }


};