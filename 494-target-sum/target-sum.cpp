class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return calculate(nums, target, 0, 0);
    }

private:
    int calculate(vector<int>& nums, int target, int i, int current_sum) {
        if (i == nums.size()) {
            return current_sum == target ? 1 : 0;
        }
        
        int add = calculate(nums, target, i + 1, current_sum + nums[i]);
        int subtract = calculate(nums, target, i + 1, current_sum - nums[i]);
        
        return add + subtract;
    }
};
