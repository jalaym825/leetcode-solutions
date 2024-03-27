class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<bool> v(n * n, false);
        vector<int> ans;
        for(auto row: grid)
        {
            for(auto num: row)
            {
                num--;
                if(v[num] == true)
                    ans.push_back(num+1);
                else
                    v[num] = true;
            }
        }

        for(int i = 0; i < v.size(); i++)
            if(v[i] == false)
                ans.push_back(i + 1);
        return ans;
    }
};