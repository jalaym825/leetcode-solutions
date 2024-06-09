class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        int preSum = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            preSum += nums[i];
            int remainder = preSum % k;
            if (remainder < 0) {
                remainder += k;
            }
            ans += mp[remainder];
            mp[remainder] += 1;
        }
        // if(preSum % k == 0)
        //     ans++;
        return ans;
    }
};
