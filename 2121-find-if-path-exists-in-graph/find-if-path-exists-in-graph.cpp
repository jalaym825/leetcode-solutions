class Solution {
public:
    bool dfs(vector<vector<int>>& g, vector<int>& visited, int source, int dest)
    {
        if(source == dest)
            return true;
        if(visited[source])
            return false;

        visited[source] = 1;
        for(int i = 0; i < g[source].size(); i++)
            if(dfs(g, visited, g[source][i], dest))
                return true;
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        vector<vector<int>> g(n);
        for(int i = 0; i < edges.size(); i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n, 0);
        return dfs(g, visited, source, dest);
    }
};