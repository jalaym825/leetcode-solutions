class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prevRow(n, 1);
        
        for(int i = 1; i < m; i++)
        {
            vector<int> currRow(n, 1);
            for(int j = 1; j < n; j++)
                currRow[j] = prevRow[j] + currRow[j - 1];

            prevRow = currRow;
        }
        return prevRow[n - 1];
    }
};
