class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        map<int, vector<int>> mp;
        vector<long long> ps(nums.size());
        ps[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            ps[i] = ps[i - 1] + nums[i];
        long long maxi = LONG_MIN;
        bool flag = false;
        long long ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i] - k) != mp.end())
            {
                flag = true;
                for (auto it : mp[nums[i] - k])
                {
                    if (it == 0)
                        ans = ps[i];
                    else
                        ans = ps[i] - ps[it - 1];
                    maxi = max(ans, maxi);
                }
            }
            if (mp.find(nums[i] + k) != mp.end())  // Fixed this line
            {
                flag = true;
                for (auto it : mp[nums[i] + k])  // Fixed this line
                {
                    if (it == 0)
                        ans = ps[i];
                    else
                        ans = ps[i] - ps[it - 1];
                    maxi = max(ans, maxi);
                }
            }
            mp[nums[i]].push_back(i);
        }
        return flag ? maxi : 0ll;
    }
};
