#include <iostream>
using namespace std;
#include <vector>

class ListNode
{
public:
    int val;
    ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        ListNode *p = new ListNode();
        ListNode *q = new ListNode();
        ListNode *r = new ListNode();
        ListNode *last = new ListNode();
        ListNode *small = new ListNode();

        p = head;
        // last = p;
        q = p;
        int rem = 1;
        while (p != nullptr)
        {
            small=p;
            if(small>q->next)
            {
                last=q;
                small
                rem = 1;
            }
            if(q->next==nullptr && rem==1)
            {
                r->next = small;
                sma
            }
        }
    }
};

ListNode *createLL(vector<int> arr, ListNode *head)
{
    ListNode *last = nullptr;
    for (int dig : arr)
    {
        ListNode *t = new ListNode();
        t->val = dig;
        t->next = nullptr;
        if (!head)
            head = t;
        else
            last->next = t;
        last = t;
        // cout<<head->val<<" ";
    }
    return head;
}
void display(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    ListNode *head = {};
    // Solution s;
    vector<int> arr = {-1, 5, 3, 4, 0};
    head = createLL(arr, head);
    display(head);
}