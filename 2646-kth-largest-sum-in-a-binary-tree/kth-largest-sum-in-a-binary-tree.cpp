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
    vector<long long> BFS1(TreeNode *root) {
        if (root == NULL)
            return {};
        
        queue<TreeNode *> q;
        q.push(root);
        
        vector<long long> sums;
        
        while (!q.empty()) {
            int levelSize = q.size();
            long long sum = 0;
            
            for (int i = 0; i < levelSize; i++) {
                TreeNode *current = q.front();
                q.pop();
                sum += current->val;
                
                if (current->left != NULL)
                    q.push(current->left);
                
                if (current->right != NULL)
                    q.push(current->right);
            }
            sums.push_back(sum);
        }
        
        return sums;
    }

    long long kthLargestLevelSum(TreeNode *root, int k) {
        vector<long long> ans = BFS1(root);
        if(k > ans.size())
            return -1;
        sort(ans.rbegin(), ans.rend());
        return ans[k - 1];
    }
};
