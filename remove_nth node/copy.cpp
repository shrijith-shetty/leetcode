#include <iostream>
#include <vector>
using namespace std;
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
class ListNode
{
public:
    int val;
    ListNode *next;
};

void create(ListNode *&l1, const vector<int> &arr)
{
    ListNode *last = nullptr;
    for (auto val : arr)
    {
        ListNode *node = new ListNode();
        node->val = val;
        if (last == nullptr)
            l1 = last = node;
        else
        {
            last->next = node;
            last = node;
        }
    }
}
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == nullptr || (head->next ==nullptr && n==1))
        {
            return nullptr;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        for (auto i = 0; i < n; i++)
        {
            if(fast == nullptr)
                return head;
            fast = fast->next;
        }
        if (fast == nullptr)
        {
            ListNode *temp = fast;
            head= head->next;
            delete temp;
            return head;
        }
        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};

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
    ListNode *head = nullptr;
    Solution s;
    vector<int> arr = {1, 2,3,4,5,6,6};
    create(head, arr);
    display(head);
    head = s.removeNthFromEnd(head, 6);
    display(head);
}