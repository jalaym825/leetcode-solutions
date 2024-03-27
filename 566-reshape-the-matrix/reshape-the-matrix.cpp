class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        if (mat.size() == r && mat[0].size() == c)
            return mat;
        int total = mat.size() * mat[0].size();
        if (total != r * c)
            return mat;
        int row = 0;
        int column = 0;
        vector<int> v1;
        for (auto it : mat)
            v1.insert(v1.end(), it.begin(), it.end());

        auto it = v1.begin();
        vector<vector<int>> v;
        while (row < r)
        {
            column = 0;
            vector<int> temp;
            while (column < c)
            {
                temp.push_back(*(it++));
                column++;
            }
            v.push_back(temp);
            row++;
        }
        return v;
    }
};
