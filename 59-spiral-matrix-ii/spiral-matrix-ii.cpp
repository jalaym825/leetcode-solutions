class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int count = 0;
        int total = n * n;
        int l = 0, r = n - 1, u = 0, d = n - 1;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        while (count < total)
        {
            for (int i = l; i <= r && count < total; i++)
            {
                ans[u][i] = ++count;
            }
            u++;
            for (int i = u; i <= d && count < total; i++)
            {
                ans[i][r] = ++count;
            }
            r--;
            for (int i = r; i >= l && count < total; i--)
            {
                ans[d][i] = ++count;
            }
            d--;
            for (int i = d; i >= u && count < total; i--)
            {
                ans[i][l] = ++count;
            }
            l++;
        }
        return ans;
    }
};
