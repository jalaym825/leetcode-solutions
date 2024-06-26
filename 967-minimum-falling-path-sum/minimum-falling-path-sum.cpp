class Solution {
public:
    int fun(int i, int j, vector<vector<int>>& mat, vector<vector<int>>& dp)
    {
        if(j < 0 || j >= mat[0].size())
            return INT_MAX;
        if(i == 0)
            return mat[i][j];
        if(dp[i][j] != INT_MAX)
            return dp[i][j];

        int a = fun(i - 1, j - 1, mat, dp);
        int b = fun(i - 1, j, mat, dp);
        int c = fun(i - 1, j + 1, mat, dp);
        return dp[i][j] = min(min(a, b), c) + mat[i][j]; 
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int> (n, INT_MAX));
        for(int i = 0; i < n; i++)
        {
            ans = min(ans, fun(m - 1, i, matrix, dp));
        }
        return ans;
    }
};