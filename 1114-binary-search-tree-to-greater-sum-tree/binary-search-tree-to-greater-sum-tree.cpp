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
class Solution {
public:
    int fun(TreeNode* root, int sum)
    {
        if(root == nullptr)
            return sum;

        sum = fun(root->right, sum);
        root->val += sum;
        sum = root->val;
        return fun(root->left, sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        fun(root, 0);
        return root;
    }
};