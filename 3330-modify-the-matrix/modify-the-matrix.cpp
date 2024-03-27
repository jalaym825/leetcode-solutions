class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int> maxs;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans;
        ans = matrix;
        for(int i = 0; i < n; i++)
        {
            int maxi = INT_MIN;
            for(int j = 0; j < m; j++)
            {
                maxi = max(maxi, matrix[j][i]);
            }
            maxs.push_back(maxi);
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(ans[i][j] == -1)
                {
                    ans[i][j] = maxs[j];
                }
            }
        }
        return ans;
    }
};