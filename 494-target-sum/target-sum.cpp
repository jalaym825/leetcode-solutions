class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int maxSum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> dp(nums.size(), vector<int>(2 * maxSum + 1, -1));
        return calculate(nums, target, 0, 0, maxSum, dp);
    }

private:
    int calculate(vector<int>& nums, int target, int i, int current_sum, int maxSum, vector<vector<int>>& dp) {
        if (i == nums.size()) {
            return current_sum == target ? 1 : 0;
        }
        if (dp[i][current_sum + maxSum] != -1)
            return dp[i][current_sum + maxSum];
        
        int add = calculate(nums, target, i + 1, current_sum + nums[i], maxSum, dp);
        int subtract = calculate(nums, target, i + 1, current_sum - nums[i], maxSum, dp);
        
        return dp[i][current_sum + maxSum] = add + subtract;
    }
};
