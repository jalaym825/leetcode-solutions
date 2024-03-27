class Solution
{
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        map<int, pair<int, int>> mp;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                mp[mat[i][j]] = {i, j};
            }
        }

        vector<int> rows(mat.size());
        vector<int> cols(mat[0].size());
        for (int i = 0; i < arr.size(); i++)
        {
            int num = arr[i];
            auto it = mp[num];
            rows[it.first]++;
            if (rows[it.first] == mat[0].size())
                return i;
            cols[it.second]++;
            if (cols[it.second] == mat.size())
                return i;
        }
        return -1;
    }
};
