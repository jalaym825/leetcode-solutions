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
    bool f = false;
    string ans;
    void fun(TreeNode* root, string curr)
    {
        if(root == NULL)
            return;
        if (root->left == NULL & root->right == NULL) {
            curr.push_back('a'+root->val);
            reverse(curr.begin(), curr.end());
            if(curr < ans || ans.size() == 1)
                ans = curr;
            if(!f)
            {
                ans = curr;
                f = true;
            }
            return;
        }
        curr.push_back('a'+root->val);
        fun(root->left, curr);
        fun(root->right, curr);
    }
    string smallestFromLeaf(TreeNode* root) {
        fun(root, "");
        cout<<ans;
        return ans;
    }
};