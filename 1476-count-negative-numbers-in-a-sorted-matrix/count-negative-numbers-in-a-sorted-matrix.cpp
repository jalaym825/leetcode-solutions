class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int col = 0;
        int cols = grid[0].size();
        int rows = grid.size();
        int ans = 0;
        for (int i = rows - 1; i >= 0; i--)
        {
            while (col < cols && grid[i][col] >= 0)
                col++;
            if (col == cols)
                break;
            ans += cols - col;
        }
        return ans;
    }
};
