class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int prev = max(nums[0], nums[1]), prev2 = nums[0], curr = 0;
        for(int i = 2; i < nums.size(); i++)
        {
            int take = nums[i] + prev2;
            int skip = prev;
            curr = max(take, skip);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};