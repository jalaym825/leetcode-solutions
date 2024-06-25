class Solution {
public:
    int fun(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp)
    {
        if(i == 0 && j == 0)
            return grid[i][j];

        if(i < 0 || j < 0)
            return INT_MAX;
        
        if(dp[i][j] != -1)
            return dp[i][j];

        int l = fun(grid, i - 1, j, dp);
        int r = fun(grid, i, j - 1, dp);

        return dp[i][j] = grid[i][j] + min(l, r);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return fun(grid, grid.size() - 1, grid[0].size() - 1, dp);
    }
};
