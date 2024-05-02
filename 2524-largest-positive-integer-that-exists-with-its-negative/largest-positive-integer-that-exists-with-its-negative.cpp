class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, bool> mp;
        for(int num: nums)
        {
            mp[num] = true;
        }
        int ans = -1;
        for(auto it: mp)
        {
            if(it.first > 0 && mp.find(-1 * it.first)!=mp.end())
                ans = max(ans, it.first);
        }
        return ans;
    }
};