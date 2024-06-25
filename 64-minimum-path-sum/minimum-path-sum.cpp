class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(i == 0 && j == 0)
                    dp[i][j] = grid[0][0];
                else
                    dp[i][j] = min(i - 1 < 0 ? INT_MAX : dp[i - 1][j], j - 1 < 0 ? INT_MAX : dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[grid.size() - 1][grid[0].size() - 1];
    }
};
