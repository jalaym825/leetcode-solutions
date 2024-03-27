class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            if (i == mat.size() - i - 1)
                sum += mat[i][i];
            else
            {
                sum += mat[i][i];
                sum += mat[i][mat.size() - i - 1];
            }
        }
        return sum;
    }
};