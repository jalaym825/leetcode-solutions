class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n != original.size())
            return {};
            
        vector<vector<int>> mat(m, vector<int>(n, -1));

        int counter = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                mat[i][j] = original[counter++];
            }
        }
        return mat;
    }
};