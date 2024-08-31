class Solution {
public:
    int longestPalindrome(string& s1, string& s2, int i1, int i2, vector<vector<int>>& dp) {
        if(i1 < 0 || i2 < 0)
        {
            return 0;
        }
        if(dp[i1][i2] != -1)
        {
            return dp[i1][i2];
        }

        if(s1[i1] == s2[i2]) {
            return dp[i1][i2] = 1 + longestPalindrome(s1, s2, i1 - 1, i2 - 1, dp);
        }

        return dp[i1][i2] = max(longestPalindrome(s1, s2, i1-1, i2, dp), longestPalindrome(s1, s2, i1, i2-1, dp));
    }
    int minInsertions(string s) {

        string s1 = s;
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));

        for(int i = 1; i < s1.size() + 1; i++)
        {
            for(int j = 1; j < s2.size() + 1; j++)
            {
                if(s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        
        return s1.size() - dp[s1.size()][s2.size()];
    }
};