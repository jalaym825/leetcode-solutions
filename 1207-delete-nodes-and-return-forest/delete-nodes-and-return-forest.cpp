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
    TreeNode* dfs(TreeNode* root, set<int> deleteSet, set<TreeNode*>& ansSet) {
        if(root == NULL)
            return NULL;
        
        TreeNode* res = root;
        if(deleteSet.find(root->val) != deleteSet.end()) {
            res = NULL;
            ansSet.erase(root);
            if(root->left)
                ansSet.insert(root->left);
            if(root->right)
                ansSet.insert(root->right);
        }
        root->left = dfs(root->left, deleteSet, ansSet);
        root->right = dfs(root->right, deleteSet, ansSet);

        return res;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        set<int> deleteSet(to_delete.begin(), to_delete.end());
        set<TreeNode*> ansSet;
        ansSet.insert(root);

        dfs(root, deleteSet, ansSet);

        return vector<TreeNode*>(ansSet.begin(), ansSet.end());
    }
};