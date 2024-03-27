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

class Solution
{
public:
    int depth = 0;
    void solve(TreeNode *root, int temp = 0)
    {
        if (root == NULL)
        {
            depth = max(depth, temp);
            temp = 0;
            return;
        }
        temp++;
        solve(root->left, temp);
        solve(root->right, temp);
    }
    
    int maxDepth(TreeNode *root)
    {
        solve(root);
        return depth;
    }
};