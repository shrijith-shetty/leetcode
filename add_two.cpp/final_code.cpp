class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int sum1 = 0;
        int sum2 = 0;
        while (l1 != nullptr)
        {
            sum1*=10;
            sum1 += l1->data;
            l1 = l1->next;
        }
        cout<<endl<<"sum1 is "<<sum1<<endl;
        while (l2 != nullptr)
        {
            sum2*=10;
            sum2 += l2->data;
            l2 = l2->next;
        }
        cout<<endl<<"sum1 is "<<sum2<<endl;
        int sum3 = sum1 + sum2;
        vector<int> arr3;
        int total = sum3;
        while (total>0)
        {
            int rem = total % 10;
            total /= 10;
            arr3.push_back(rem);
        }
        ListNode *head4 = nullptr;
        create(arr3, head4);
        return head4;
    }

    void create(vector<int> arr, ListNode *&head)
    {
        ListNode *last = nullptr;
        for (int i = 0; i < arr.size(); i++)
        {
            ListNode *t = new ListNode();
            t->data = arr[i];
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