#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int value;
    ListNode *next;
};

void create(ListNode *&head, vector<int> arr)
{
    ListNode *last = nullptr;
    for (auto val : arr)
    {
        ListNode *node = new ListNode();
        node->value = val;
        node->next = nullptr;
        if (!last)
            head = last = node;
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
    ListNode *swapPairs(ListNode *&head)
    {
        ListNode *current = head;
        while (current != nullptr && current->next != nullptr)
        {
            int first = current->value;
            int second = current->next->value;
            current->value = second;
            current->next->value = first;
            current = current->next->next;
        }
        return head;
    }
};

void display(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    ListNode *head = nullptr;
    create(head, arr);
    display(head);

    Solution sol;
    head = sol.swapPairs(head);
    display(head);

    return 0;
}