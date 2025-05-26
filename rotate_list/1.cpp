#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
};

ListNode *create(vector<int> arr, ListNode *&head)
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
    return head;
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if(head==nullptr || k==0)
            return head;
        ListNode *last = head;
        int count = 0;
        while (last != nullptr)
        {
            last = last->next;
            count++;
        }
        k%=count;
        if( k==0)
            return head;
        ListNode *fast = head;
        ListNode *low = head;
        for (int i = 0; i < k; i++)
        {
            
            fast = fast->next;
        }
        while (fast->next != nullptr)
        {
            fast = fast->next;
            low = low->next;
        }
        last = low->next;
        low->next = nullptr;
        fast->next = head;
        head = last;
        return head;
    }
};


class Solution1 {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || k == 0)
            return head;

        // Count the number of nodes
        int count = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            count++;
        }

        k %= count;
        if (k == 0)
            return head;

        // Find the new tail: (count - k - 1)th node
        ListNode* newTail = head;
        for (int i = 0; i < count - k - 1; i++) {
            newTail = newTail->next;
        }

        // Set the new head and rearrange pointers
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        tail->next = head;

        return newHead;
    }
};


int main()
{
    ListNode *head = nullptr;
    vector<int> arr = {1};
    Solution s;
    head = create(arr, head);
    display(head);
    head = s.rotateRight(head, 2);
    display(head);
}