class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int count = 0;
        for(int i = 0; i < nums.size() - pattern.size(); i++)
        {
            int k = 0;
            bool f = true;
            for(int j = i + 1; j < i + pattern.size() + 1; j++)
            {
                if(pattern[k] == 1)
                {
                    if(nums[j - 1] >= nums[j]){
                        f = false;
                        break;
                    }
                }
                else if(pattern[k] == 0)
                {
                    if(nums[j - 1] != nums[j])
                    {
                        f = false;
                        break;
                    }
                }
                else if(pattern[k] == -1)
                {
                    if(nums[j - 1] <= nums[j])
                    {
                        f = false;
                        break;
                    }
                }
                k++;
            }
            if(f)
                count++;
        }
        return count;
    }
};