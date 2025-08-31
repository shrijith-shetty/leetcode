#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// TreeNode* createTree(vector<int>& arr, int i) {
//     if (i >= arr.size()) return nullptr;
//     TreeNode* root = new TreeNode(arr[i]);
//     root->left = createTree(arr, 2*i + 1);
//     root->right = createTree(arr, 2*i + 2);
//     return root;
// }

// TreeNode* create(vector<int> arr) {
//     return createTree(arr, 0);
// }

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        int max  = 0;
        vector<int> arr;
        while (!arr.empty() || (root->left != nullptr && root->right != nullptr))
        {
            if (root->left != nullptr)
            {
                arr.push_back(root->val);
                root = root->left;
            }
            else if (root->right != nullptr)
            {
                arr.push_back(root->right->val);
                root = root->right;
            }
            else{
                arr.pop_back();
                int n = arr.size();
                root->val = arr[n-];
            }
            if(max<arr.size())
                max = arr.size();
        }
    }
};

TreeNode *insertBST(TreeNode *root, int val)
{
    if (!root)
        return new TreeNode(val);
    if (val < root->val)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBSET(root->right, val);
    return root;
}
TreeNode *create(vector<int> arr)
{
    TreeNode *root = nullptr;
    for (auto ar : arr)
    {
        insertBST(root, ar);
    }
    return root;
}
int main()
{
    Solution s;
    vector<int> arr = {3, 9, 20, null, null, 15, 7};
    TreeNode *tree = nullptr;
    tree = create(arr);
    cout << s.maxDepth(tree);
}