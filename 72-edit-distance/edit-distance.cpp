class Solution {
public:
    int minDistance(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        // Initialize base cases
        for (int i = 0; i <= m; i++) dp[i][0] = i;  // Deleting all characters from s1
        for (int j = 0; j <= n; j++) dp[0][j] = j;  // Inserting all characters to match s2

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];  // No operation needed
                } else {
                    // Insert, delete, replace
                    int ins = 1 + dp[i][j - 1];
                    int del = 1 + dp[i - 1][j];
                    int rep = 1 + dp[i - 1][j - 1];
                    dp[i][j] = min(ins, min(del, rep));
                }
            }
        }

        return dp[m][n];
    }
};
