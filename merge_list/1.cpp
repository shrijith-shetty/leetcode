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

void create(ListNode *&l1, vector<int> &arr)
{
    ListNode *last = nullptr;
    for (int i = 0; i < arr.size(); i++)
    {
        ListNode *node = new ListNode();
        node->val = arr[i];
        node->next = nullptr;
        if (!last)
            l1 = last = node;
        else
        {
            last->next = node;
            last = node;
        }
    }
}

void display(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *last = nullptr;
        ListNode *l3 = nullptr;
        while (l1 || l2)
        {
            ListNode *node = new ListNode();
            if (l2 == nullptr || (l1 && l1->val < l2->val))
            {
                node = l1;
                l1 = l1->next;
            }
            else 
            {
                node = l2;
                l2 = l2->next;
            }
            node->next = nullptr;
            if (!last)
                l3 = last = node;
            else
            {
                last->next = node;
                last = node;
            }
        }
        return l3;
    }
};

int main()
{
    ListNode *l1 = nullptr;
    ListNode *l2 = nullptr;
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 6, 7, 8, 9};

    create(l1, arr1);
    create(l2, arr2);
    display(l1);
    display(l2);
    Solution s;
    ListNode *l3 = s.mergeTwoLists(l1, l2);
    display(l3);
}