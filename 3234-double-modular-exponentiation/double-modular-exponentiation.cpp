class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        int n = variables.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int ai = variables[i][0], bi = variables[i][1], ci = variables[i][2], mi = variables[i][3];
            int n1 = 1;
            for(int i = 0; i < bi; i++)
            {
                n1 = (n1 * ai) % 10;
            }
            
            int n2 = 1;
            for(int i = 0; i < ci; i++)
            {
                n2 = (n2 * n1) % mi;
            }
            
            if(n2 == target)
                ans.push_back(i);
        }
        return ans;
    }
};