class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto num: nums)
        {
            mp[num]++;
            if(mp[num] >= 3)
                return false;
        }
        return true;
    }
};