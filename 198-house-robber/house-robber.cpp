class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        vector<int> dp(nums.size() + 1, -1);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++)
        {
            int take = nums[i] + dp[i-2];
            int skip = dp[i-1];
            dp[i] = max(take, skip);
        }
        return dp[nums.size()-1];
    }
};