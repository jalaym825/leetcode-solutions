class Solution {
public:
    int fun(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>& dp)
    {
        if(i == triangle.size() - 1)
            return triangle[i][j];

        if(dp[i][j] != -1)
            return dp[i][j];
        
        int a = triangle[i][j] + fun(triangle, i + 1, j, dp);
        int b = triangle[i][j] + fun(triangle, i + 1, j + 1, dp);
        return dp[i][j] = min(a, b);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m - 1].size();
        vector<vector<int>> dp(triangle.size(), vector<int>(n, -1));
        return fun(triangle, 0, 0, dp);
    }
};