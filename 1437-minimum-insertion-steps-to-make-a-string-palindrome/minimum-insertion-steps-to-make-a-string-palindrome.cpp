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
        vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
        
        return s1.size() - longestPalindrome(s1, s2, s1.size()-1, s2.size()-1, dp);
    }
};