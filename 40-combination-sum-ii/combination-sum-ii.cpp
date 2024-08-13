class Solution {
public:
    void fun(vector<int>& c, int t, vector<int>& combination, int start, vector<vector<int>>& ans) {
        if(t == 0) {
            ans.push_back(combination);
            return;
        }
        
        for(int i = start; i < c.size(); i++) {
            if(i > start && c[i] == c[i - 1]) continue;
            if(c[i] > t) break;
            
            combination.push_back(c[i]);
            fun(c, t - c[i], combination, i + 1, ans);
            combination.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        fun(candidates, target, combination, 0, ans);
        return ans;
    }
};
