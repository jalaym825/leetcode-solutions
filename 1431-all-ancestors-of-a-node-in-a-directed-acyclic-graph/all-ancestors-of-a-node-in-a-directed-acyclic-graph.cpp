class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int curr, int par, vector<bool>& vis, vector<vector<int>>& adj) {
        if(vis[curr]) return;
        if(curr != par) ans[curr].push_back(par);
        vis[curr] = true;
        for(auto next : adj[curr]) {
           dfs(next, par, vis, adj);
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v); 

        } 
        ans.resize(n);

        for(int i=0; i<n; i++) {
            vector<bool> vis(n, false);
            dfs(i, i, vis, adj);
        }
        return ans;
    }
};