class Solution {
public:
    int fun(int i, int j, string& s1, string& s2, vector<vector<int>>& dp)
    {
        if(i == -1)
            return j + 1;
        if(j == -1)
            return i + 1;
        if(dp[i][j] != -1)
            return dp[i][j];

        if(s1[i] == s2[j])
            return dp[i][j] = fun(i - 1, j - 1, s1, s2, dp);
        else
        {
            // insert at position i
            int ins = 1 + fun(i, j - 1, s1, s2, dp);

            // delete
            int del = 1 + fun(i - 1, j, s1, s2, dp);

            // replace
            int rep = 1 + fun(i - 1, j - 1, s1, s2, dp);

            return dp[i][j] = min(ins, min(del, rep));
        }
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(), vector<int>(word2.size(), -1));
        return fun(word1.size() - 1, word2.size() - 1, word1, word2, dp);
    }
};