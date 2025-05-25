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
        ListNode *data = new ListNode();
        data->val = value;
        if (head == nullptr)
            head = last = data;
        else
        {
            last->next = data;
        }
        last = data;
    }
}

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *l3 = nullptr;
        ListNode *last = nullptr;
        while (l1 != nullptr || l2 != nullptr)
        {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            int plus = val1 + val2 + carry;
            carry = plus / 10;
            plus %= 10;
            ListNode *t = new ListNode();
            t->val = plus;
            if (l3 == nullptr)
                l3 = last = t;
            else
            {
                last->next = t;
                last = t;
            }
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        if (carry > 0)
        {
            ListNode *t = new ListNode();
            t->val = carry;
            last->next = t;
        }
        return l3;
    }
};

void display(ListNode *head)
{
    while (head->next != nullptr)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << head->val << endl;
}
int main()
{
    vector<int> arr1 = {2, 4, 3};
    vector<int> arr2 = {5, 6, 4};

    ListNode *head1 = nullptr;
    ListNode *head2 = nullptr;
    create(arr1, head1);
    create(arr2, head2);
    display(head1);
    display(head2);
    Solution s;
    ListNode *head3 = s.addTwoNumbers(head1, head2);
    display(head3);
}