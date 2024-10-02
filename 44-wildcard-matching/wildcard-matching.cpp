class Solution {
public:
    bool fun(int i, int j, string& s1, string& s2, vector<vector<int>>& dp)
    {
        if (i == -1 && j == -1)
            return true;

        if (j == -1 && i >= 0)
            return false;

        if (i == -1 && j >= 0) {
            for (int k = j; k >= 0; k--)
                if (s2[k] != '*')
                    return false;
            return true;
        }

        if(dp[i][j] != -1)
            return dp[i][j];

        if (s1[i] == s2[j] || s2[j] == '?')
            return dp[i][j] = fun(i - 1, j - 1, s1, s2, dp);

        if (s2[j] == '*')
            return dp[i][j] = fun(i, j - 1, s1, s2, dp) + fun(i - 1, j, s1, s2, dp);

        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size(), vector<int>(p.size(), -1));
        return fun(s.size() - 1, p.size() - 1, s, p, dp);
    }
};
