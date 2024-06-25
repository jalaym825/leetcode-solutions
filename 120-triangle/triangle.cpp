class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m - 1].size();
        vector<int> prevRow(n);
        for(int i = 0; i < n; i++)
        {
            prevRow[i] = triangle[m - 1][i];
        }
        for(int i = n - 2; i >= 0; i--)
        {
            vector<int> currRow(n);
            for(int j = i; j >= 0; j--)
            {
                int a = triangle[i][j] + prevRow[j];
                int b = triangle[i][j] + prevRow[j + 1];
                currRow[j] = min(a, b);
            }
            prevRow = currRow;
        }
        return prevRow[0];
    }
};