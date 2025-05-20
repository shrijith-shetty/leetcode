#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        int data;
        Solution * next;
    
    void A2N(Solution *l1, Solution *l2){
        Solution* l3=nullptr;
        int rem=0,value=0;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(value !=0)
            {
                l1->data +=value;
                value = 0;
            }
            value = l1->data +l2->data;
            if(value>9)
            {
                rem = value%10;
                value = value/10;
                l3 ->data = rem;
                rem = 0;
            }
            l1=l1->next;
            l2=l2->next;
            l3=l3->next;
        }
    }

};

class V2L{
    public:
    Solution* v2l(vector<int> arr)
    {
        Solution * head = nullptr;
        Solution* last = nullptr;
        for(auto value : arr)
        {
            Solution* t = new Solution();
            t->data = value;
            t->next = nullptr;
            if(!head)
            {
                head = t;
            }
            else{
                 last->next = t;
            }
            last = t;
        }
        return head;
    }

    void display(Solution * l1)
    {
        Solution * head = l1;
        while(head!=nullptr)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
};
int main()
{
    Solution s;
    V2L v;
    vector<int> arr1 = {2,4,3};
    vector<int> arr2 = {4,6,5};
    Solution * l1 = v.v2l(arr1);
    Solution * l2 = v.v2l(arr2);

    v.display(l1);
    cout<<endl;
    v.display(l2);

}