class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            for(; j < nums.size(); j++)
            {
                if(nums[j] <= nums[j - 1])
                    break;
            }
            inc = max(inc, j - i);
        }
        int dec = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            for(; j < nums.size(); j++)
            {
                if(nums[j] >= nums[j - 1])
                    break;
            }
            dec = max(dec, j - i);
        }
        return max(inc, dec);
        
    }
};
