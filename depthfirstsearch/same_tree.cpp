#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        right = left = nullptr;
    }
};

TreeNode *insert(TreeNode *root, int data)
{
    if (!root)
        return new TreeNode(data);
    if (root->val > data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> arr1, arr2;
        stack<TreeNode *> s1, s2;

        while (p || !s1.empty())
        {
            while (p)
            {
                s1.push(p);
                p = p->left;
            }
            p = s1.top();
            s1.pop();
            arr1.push_back(p->val);

            p = p->right;
        }

        while (q || !s2.empty())
        {
            while (q)
            {
                s2.push(q);
                q = q->left;
            }
            q = s2.top();
            s2.pop();
            arr2.push_back(q->val);
            q = q->right;
        }
        return arr1 == arr2;
    }
};

void display(TreeNode *root)
{
    if (root == nullptr)
        return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {1, 2, 3};
    TreeNode *root1 = nullptr;
    TreeNode *root2 = nullptr;
    for (auto val : arr1)
    {
        root1 = insert(root1, val);
    }
    display(root1);
    cout << endl;
    for (auto val : arr2)
    {
        root2 = insert(root2, val);
    }
    display(root2);
    cout << endl;
    Solution s;
    cout << s.isSameTree(root1, root2);
}