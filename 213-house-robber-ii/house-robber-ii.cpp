class Solution {
public:
    int oneToN(vector<int>& nums)
    {
        int prev = max(nums[1], nums[2]), prev2 = nums[1], curr = 0;
        for(int i = 3; i < nums.size(); i++)
        {
            int take = nums[i] + prev2;
            int skip = prev;
            curr = max(take, skip);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int zeroToNMinus1(vector<int>& nums)
    {
        int prev = max(nums[0], nums[1]), prev2 = nums[0], curr = 0;
        for(int i = 2; i < nums.size() - 1; i++)
        {
            int take = nums[i] + prev2;
            int skip = prev;
            curr = max(take, skip);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return max(nums[0], nums[1]);
        return max(oneToN(nums), zeroToNMinus1(nums));
    }
};