#include <iostream>
#include <vector>
#include "2_add_lib.cpp"
using namespace std;

class Solution
{
public:

long long l2a(ListNode* &l)
    {
        vector<long long> arr;
        while(l!=nullptr)
        {
            arr.push_back(l->val);
            l = l->next;
        }
        long long total = 0;
        reverse(arr.begin(),arr.end());
        for(long long i=0;i<arr.size();i++)
        {

                total  = (total*10) + arr[i];
        }
        
        return total;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        
        long long sum1 = l2a(l1);
        long long sum2 = l2a(l2);
        long long sum3 = sum1 + sum2;
        vector<long long> arr3;
        long long total = sum3;
        if(sum3 == 0)
            arr3.push_back(sum3);
        else{
            long long i=0;
            while (total>0)
            {
                ++i;
                long long rem = total % 10;
                total /= 10;
                arr3.insert(arr3.begin(),rem);
            }
        }
        reverse(arr3.begin(), arr3.end());       
        ListNode *head4 = nullptr;
        create(arr3, head4);
        return head4;
    }

    
     void create(vector<long long> arr, ListNode *&head)
    {
        ListNode *last = nullptr;
        
        for (long long i = 0; i < arr.size(); i++)
        {
            ListNode *t = new ListNode();
            t->val = arr[i];
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
    void display(ListNode *head3)
    {
        ListNode *cur = head3; // Initialize cur to polong to the head
        while (cur)
        {                                  // Traverse until cur becomes null
            cout << cur->val<< " "; 
            cur = cur->next;               // Move to the next node
        }
        cout << endl; // Print a newline at the end
    }
};

int main()
{
    
    Solution s1;
    ListNode *head1 = nullptr;
    ListNode *head2 = nullptr;
    vector<long long> arr1 = {2,4,9};
    vector<long long> arr2 = {5,6,4,9};
    
    s1.create(arr1, head1);
    s1.create(arr2, head2);

    cout<<endl<<"array 1"<<endl;
    s1.display(head1);
    cout<<endl<<"array 2"<<endl;
    s1.display(head2);

    ListNode *head3 = s1.addTwoNumbers(head1, head2);
    cout<<endl<<"final output"<<endl;
    s1.display(head3);
} 