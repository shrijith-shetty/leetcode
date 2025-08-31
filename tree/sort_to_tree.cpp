#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int k = nums.size() / 2;
        TreeNode *head = new TreeNode();
        head->val = nums[k];
        head->left = nullptr;
        head->right = nullptr;

        for (int i = 0; i < k ; i++)
        {
            TreeNode *t = new TreeNode();
            t->val = nums[i];
            t->left = nullptr;
            t->right = nullptr;
            node(head, t);
        }
        for (int i = k + 1; i < nums.size(); i++)
        {
            TreeNode *t = new TreeNode();
            t->val = nums[i];
            t->left = nullptr;
            t->right = nullptr;
            node(head, t);
        }
        return head;
    }

    void node(TreeNode *&head, TreeNode *t)
    {
        if (head == nullptr)
        {
            head = t;
            return;
        }
        if (head->val > t->val)
            node(head->left, t);
        else
            node(head->right, t);
    }
};

void display(TreeNode *head)
{
    if (head == nullptr)
        return;
    display(head->left);
    cout << head->val << " ";
    display(head->right);
    cout<<endl;
}

int main()
{
    vector<int> arr = {-10, -3, 0, 5, 9};
    Solution s;
    TreeNode *head = nullptr;
    head = s.sortedArrayToBST(arr);
    display(head);
}