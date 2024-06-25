class Solution {
public:
    int fun(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp)
    {
        if (i >= grid.size() || j >= grid[0].size())
            return INT_MAX;
        
        if (i == grid.size() - 1 && j == grid[0].size() - 1)
            return grid[i][j];
        
        if(dp[i][j] != -1)
            return dp[i][j];

        int l = fun(grid, i + 1, j, dp);
        int r = fun(grid, i, j + 1, dp);

        return dp[i][j] = grid[i][j] + min(l, r);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return fun(grid, 0, 0, dp);
    }
};
