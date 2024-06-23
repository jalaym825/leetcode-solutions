class Solution {
public:
    int f(int i, int j, vector<vector<int>> &dp)
    {
        if(i == 0 && j == 0)
            return 1;
        
        if(i < 0 || j < 0)
            return 0;

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int up = f(i - 1, j, dp);
        int left = f(i, j - 1, dp);
        return dp[i][j] = up + left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[0][0] = 1;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if((i == 0 && j == 0))
                    continue;
                
                dp[i][j] = (i - 1 < 0 ? 0 : dp[i - 1][j]) +(j - 1 < 0 ? 0 : dp[i][j - 1]);
            }
        }
        return dp[m - 1][n - 1];
    }
};