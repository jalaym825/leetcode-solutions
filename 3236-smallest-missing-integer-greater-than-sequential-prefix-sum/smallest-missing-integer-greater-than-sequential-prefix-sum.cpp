class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i = 1;
        int sum = nums[0];
        for(; i < nums.size(); i++)
        {
            if(nums[i] - nums[i - 1] == 1)
            {
                sum += nums[i];
            }
            else
            {
                break;
            }
        }
        while(true)
        {
            if(find(nums.begin(), nums.end(), sum) == nums.end())
            {
                return sum;
            }
            else
            {
                sum++;
            }
        }
        return -1;
    }
};