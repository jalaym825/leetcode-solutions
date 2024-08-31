class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1, 0));

        // Build the LCS dp table
        for(int i = 1; i <= s1.size(); i++) {
            for(int j = 1; j <= s2.size(); j++) {
                if(s1[i-1] == s2[j-1]) 
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        int lcsLength = dp[s1.size()][s2.size()];
        int scsLength = s1.size() + s2.size() - lcsLength;

        string ans(scsLength, '$');
        int ansI = ans.size() - 1;

        int i = s1.size(), j = s2.size();

        while(i > 0 && j > 0) {
            if(s1[i-1] == s2[j-1]) {
                ans[ansI--] = s1[i-1];
                i--;
                j--;
            } else if(dp[i][j-1] >= dp[i-1][j]) {
                ans[ansI--] = s2[j-1];
                j--;
            } else {
                ans[ansI--] = s1[i-1];
                i--;
            }
        }

        while(i > 0) {
            ans[ansI--] = s1[i-1];
            i--;
        }
        while(j > 0) {
            ans[ansI--] = s2[j-1];
            j--;
        }

        return ans;
    }
};
