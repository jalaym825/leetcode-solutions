class Solution {
public:
    bool fun(vector<int>& nums, int i, int sum, int target, vector<vector<int>> &dp) {
        if (sum == target)
            return true;
        if (i >= nums.size() || sum > target)
            return false;
        if (dp[i][sum] != -1)
            return dp[i][sum];
        
        if (fun(nums, i + 1, sum + nums[i], target, dp))
            return dp[i][sum] = true;
        
        if (fun(nums, i + 1, sum, target, dp))
            return dp[i][sum] = true;
        
        return dp[i][sum] = false;
    }

    bool canPartition(vector<int>& nums) {
        int totSum = accumulate(nums.begin(), nums.end(), 0);
        if (totSum % 2 != 0)
            return false;
        
        int target = totSum / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));
        return fun(nums, 0, 0, target, dp);
    }
};
