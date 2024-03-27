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
    TreeNode* buildTree(vector<int> preorder, vector<int> inorder) {
        if(preorder.size() == 0 || inorder.size() == 0) return NULL;
        TreeNode* curr = new TreeNode(preorder[0]);
        int split = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();
        curr->left = buildTree(vector<int>(preorder.begin()+1, preorder.begin()+split+1), vector<int>(inorder.begin(), inorder.begin() + split));
        curr->right = buildTree(vector<int>(preorder.begin()+split+1, preorder.end()), vector<int>(inorder.begin()+split+1, inorder.end()));

        return curr;
    }
};
