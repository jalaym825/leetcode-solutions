class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = -1;
        for(int num: nums)
        {
            mp[num]++;
            maxi = max(maxi, mp[num]);
        }

        vector<vector<int>> ans(maxi);
        for(auto it: mp)
        {
            int i = 0;
            while(it.second--)
            {
                ans[i++].push_back(it.first);
            }
        }
        return ans;
    }
};