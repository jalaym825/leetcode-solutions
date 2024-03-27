class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rows(grid.size());
        vector<int> cols(grid[0].size());
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> diff(m, vector<int>(n, 0));
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                diff[i][j] = rows[i] + cols[j] - (m - rows[i]) - (n - cols[j]);
            }
        }
        return diff;
    }
};