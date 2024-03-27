class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i; j < nums.size(); j++)
            {
                if(abs(nums[i] - nums[j]) <= min(nums[i], nums[j]))
                {
                    ans = max(ans, nums[i] ^ nums[j]);
                }
            }
        }
        return ans;
    }
};