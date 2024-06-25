class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m - 1].size();
        vector<vector<int>> dp(triangle.size(), vector<int>(n, -1));
        for(int i = 0; i < n; i++)
        {
            dp[m - 1][i] = triangle[m - 1][i];
        }
        for(int i = n - 2; i >= 0; i--)
        {
            for(int j = i; j >= 0; j--)
            {
                int a = triangle[i][j] + dp[i + 1][j];
                int b = triangle[i][j] + dp[i + 1][j + 1];
                dp[i][j] = min(a, b);
            }
        }
        return dp[0][0];
    }
};