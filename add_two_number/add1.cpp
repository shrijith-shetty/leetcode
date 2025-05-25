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
        while (l1 != nullptr && l2 != nullptr)
        {
            int plus = l1->val + l2->val;
            if (carry == 1)
                plus += 1;
            if (plus > 9)
            {
                plus %= 10;
                carry = 1;
            }else{
                carry = 0;
            }

            ListNode *t = new ListNode();
            t->val = plus;
            if (l3 == nullptr)
                l3 = last = t;
            else
            {
                last->next = t;
                last = t;
            }
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != nullptr && l2 == nullptr)
        {
            int plus = l1->val;
            l1 = l1->next;

            if (carry == 1)
                plus += 1;
            if (plus > 9)
            {
                plus %= 10;
                carry = 1;
            }else{
                carry = 0;
            }
            ListNode *t = new ListNode();
            t->val = plus;
            if (l3 == nullptr)
                l3 = last = t;
            else
            {
                last->next = t;
                last = t;
            }
        }

        while (l2 != nullptr && l1 == nullptr)
        {

            int plus = l2->val;
            l2 = l2->next;
            if (carry == 1)
                plus += 1;
            if (plus > 9)
            {
                plus %= 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode *t = new ListNode();
            t->val = plus;
            if (l3 == nullptr)
                l3 = last = t;
            else
            {
                last->next = t;
                last = t;
            }
        }
        if (carry == 1)
        {
            ListNode *t = new ListNode();
            t->val = 1;
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