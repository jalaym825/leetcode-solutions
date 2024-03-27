class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int cols = mat[0].size();
        for(int i = 0; i < mat.size(); i++)
        {
            int n = k % cols;
            vector<int> v;
            for(int j = 0; j < cols; j++)
            {
                v.push_back(mat[i][(n+j)%cols]);
            }
            if(v!=mat[i])return false;
        }
        return true;
    }
};