class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> prevRow(n, INT_MAX);

        for(int i = 0; i < grid.size(); i++)
        {
            vector<int> currRow(n, INT_MAX);
            for(int j = 0; j < grid[0].size(); j++)
            {
                if (i == 0 && j == 0) {
                    currRow[j] = grid[i][j];
                } else {
                    int up = (i > 0) ? prevRow[j] : INT_MAX;
                    int left = (j > 0) ? currRow[j - 1] : INT_MAX;
                    currRow[j] = min(up, left) + grid[i][j];
                }
            }
            prevRow = currRow;
        }
        return prevRow[grid[0].size() - 1];
    }
};
