class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0;
        for(int num: nums)
        {
            if(num >= 0)
            {
                ans[i] = num;
                i += 2;
            }
        }
        i = 1;
        for(int num: nums)
        {
            if(num < 0)
            {
                ans[i] = num;
                i += 2;
            }
        }
        return ans;
    }
};