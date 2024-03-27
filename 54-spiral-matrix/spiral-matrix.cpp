class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int count = 0;
        int total = matrix.size() * matrix[0].size();
        int l = 0, r = matrix[0].size() - 1, u = 0, d = matrix.size() - 1;
        vector<int> ans;
        while (count < total)
        {
            for (int i = l; i <= r && count < total; i++)
            {
                ans.push_back(matrix[u][i]);
                count++;
            }
            u++;
            for (int i = u; i <= d && count < total; i++)
            {
                ans.push_back(matrix[i][r]);
                count++;
            }
            r--;
            for (int i = r; i >= l && count < total; i--)
            {
                ans.push_back(matrix[d][i]);
                count++;
            }
            d--;
            for (int i = d; i >= u && count < total; i--)
            {
                ans.push_back(matrix[i][l]);
                count++;
            }
            l++;
        }
        return ans;
    }
};
