class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> prevRow(n);
        for(int j = 0; j < n; j++)
            prevRow[j] = matrix[0][j];

        for(int i = 1; i < m; i++)
        {
            vector<int> currRow(n);
            for(int j = 0; j < n; j++)
            {
                int a = j - 1 >= 0 ? prevRow[j - 1] : INT_MAX;
                int b = prevRow[j];
                int c = j + 1 < n ? prevRow[j + 1] : INT_MAX;
                currRow[j] = min(min(a, b), c) + matrix[i][j];
            }
            prevRow = currRow;
        }
        int ans = INT_MAX;
        for(int j = 0; j < n; j++)
            ans = min(ans, prevRow[j]);

        return ans;
    }
};