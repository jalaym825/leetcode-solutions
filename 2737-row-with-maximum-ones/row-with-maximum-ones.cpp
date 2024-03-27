class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        int max = INT_MIN, temp = 0;
        int index;
        for (int i = 0; i < mat.size(); i++)
        {
            temp = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                    temp++;
            }
            if (temp > max)
            {
                index = i;
                max = temp;
            }
        }
        return {index, max};
    }
};