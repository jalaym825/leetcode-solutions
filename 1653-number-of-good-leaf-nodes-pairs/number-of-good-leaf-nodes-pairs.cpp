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
    vector<int> solve(TreeNode* root, int distance, int &ans) {
        if (!root)
            return {};

        if (!root->left && !root->right)
            return {1};

        vector<int> l = solve(root->left, distance, ans);
        vector<int> r = solve(root->right, distance, ans);

        for (int i = 0; i < l.size(); i++)
            for (int j = 0; j < r.size(); j++)
                if (l[i] + r[j] <= distance)
                    ans++;

        for (int i = 0; i < l.size(); i++)
            l[i]++;
        for (int i = 0; i < r.size(); i++)
            l.push_back(r[i] + 1);
        return l;
    }
    int countPairs(TreeNode* root, int distance) {
        int ans = 0;
        solve(root, distance, ans);
        return ans;
    }
};