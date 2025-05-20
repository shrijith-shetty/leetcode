#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    TreeNode *left;
    TreeNode *right;
    int val;
};

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {

        int n = nums.size() / 2;
        TreeNode *head = new TreeNode();
        TreeNode *t = new TreeNode();
        t->val = nums[n];
        t->left = nullptr;
        t->right = nullptr;
        if(!head)
            head = t;
        for (int i = 0; i < nums.size(); i++)
        {
            if (n == i)
                continue;
            TreeNode *ptr = head;
            while (ptr->left != nullptr && ptr->right != nullptr)
            {
                if (ptr->val > nums[i])
                {
                    ptr = ptr->left;
                }
                else
                {
                    ptr = ptr->right;
                }
            }
            if (ptr->val > nums[i])
                ptr->left = t;
            else
                ptr->right = t;
        }
        return head;
    }
};

void display(TreeNode *head)
{
    display(head->left);
    cout << head->val << " ";
    display(head->right);
}
int main()
{
    vector<int> arr = {-10, -3, 0, 5, 9};
    Solution s;
    TreeNode *tree = s.sortedArrayToBST(arr);
    display(tree);
}