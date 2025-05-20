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
        if (head->next == nullptr)
        {
            delete head;
            return head;
        }
        ListNode *pnt = head;
        for (int i = 0; i < n; i++)
        {
            if (pnt->next == nullptr)
                return head;
            pnt = pnt->next;
        }
        cout << 1;
        ListNode *p = pnt;
        pnt->next = pnt->next->next;
        // pnt->next->next = nullptr;
        delete p;
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
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    create(head, arr);
    display(head);
    cout << 1;
    head = s.removeNthFromEnd(head, 3);
    cout << 1;
    display(head);
}