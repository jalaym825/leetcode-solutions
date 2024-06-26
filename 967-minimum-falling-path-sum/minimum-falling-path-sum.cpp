class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int> (n, INT_MAX));
        for(int j = 0; j < n; j++)
        {
            dp[0][j] = matrix[0][j];
        }
        for(int i = 1; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int a = j - 1 >= 0 ? dp[i - 1][j - 1] : INT_MAX;
                int b = dp[i - 1][j];
                int c = j + 1 < n ? dp[i - 1][j + 1] : INT_MAX;
                dp[i][j] = min(min(a, b), c) + matrix[i][j];
            }
        }
        int ans = INT_MAX;
        for(int j = 0; j < n; j++)
        {
            ans = min(ans, dp[m - 1][j]);
        }

        return ans;
    }
};