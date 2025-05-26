#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
};

void create(vector<int> arr, ListNode *&head)
{
    ListNode *last = nullptr;
    for (auto value : arr)
    {
        ListNode *t = new ListNode();
        t->val = value;
        t->next = nullptr;
        if (!head)
            head = last = t;
        else
        {
            last->next = t;
            last = t;
        }
    }
}

void display(ListNode *head)
{
    while (head->next != nullptr)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << head->val << endl;
}
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *&head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != nullptr)
        {
            if (fast->next == nullptr && slow->val == fast->val)
            {
                slow->next = nullptr;
            }
            if (fast->val == slow->val)
            {
                fast = fast->next;
            }
            else
            {
                slow->next = fast;
                slow = fast;
            }
        }
        return head;
    }
};

int main()
{
    vector<int> arr = {};
    ListNode *head = nullptr;
    create(arr, head);
    display(head);
    Solution s;
    ListNode *l1 = s.deleteDuplicates(head);
    display(l1);
}