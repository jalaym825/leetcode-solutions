class Solution {
public:
    int fun(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
    {
        if(j == -1)
            return 1;
        if(i == -1)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];


        if(s1[i] == s2[j])
        {
            return dp[i][j] = fun(i-1, j-1, s1, s2, dp) + fun(i-1, j, s1, s2, dp);
        }
        else
        {
            return dp[i][j] = fun(i-1, j, s1, s2, dp);
        }
    }
    int numDistinct(string s, string t) {
        vector<vector<int>> dp(s.size(), vector<int>(t.size(), -1));
        return fun(s.size()-1, t.size()-1, s, t, dp);
    }
};