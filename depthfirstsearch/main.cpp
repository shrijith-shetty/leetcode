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
        left = right = nullptr;
    }
};

TreeNode *create(TreeNode *&head, int data)
{
    if (!head)
        return new TreeNode(data);
    if (head->val > data)
        head->left = create(head->left, data);
    else if (head->val < data)
        head->right = create(head->right, data);
    return head;
}

void inorder(TreeNode *head)
{
    if (head == nullptr)
        return;
    inorder(head->left);
    cout<<head->val<<" ";
    //arr1.push_back(head->val);
    inorder(head->right);
}

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> arr;
        stack<TreeNode *> s;
        while (root || !s.empty())
        {
            while (root)
            {
                s.push(root);
                root = root->left;
            }
            TreeNode *node = s.top();
            s.pop();
            arr.push_back(node->val);
            root = node->right;
        }
        return arr;
    }
    vector<int>arr1;
    void inorder(TreeNode *head)
    {
        if (head == nullptr)
            return;
        inorder(head->left);
        arr1.push_back(head->val);
        inorder(head->right);
    }
};

int main()
{
    TreeNode *root = nullptr;

    // Insert values into the BST
    int values[] = {50, 30, 20, 40, 70, 60, 80};
    for (int val : values)
    {
        root = create(root, val);
    }
    cout << "In-order traversal of BST: ";
    inorder(root);
    cout << endl;
    Solution s;
    vector<int> arr = s.inorderTraversal(root);
    for (auto val : arr)
    {
        cout << val << " ";
    }
}