class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        long long ans = 0;
        const int mod = 1000000007;
        unordered_map<int, int> mp;
        for(auto it: nums)
        {
            string num = to_string(it);
            reverse(num.begin(), num.end());
            int n = stoi(num);
            mp[it - n]++;
        }
        for(auto it: mp)
            ans += (long long)it.second * (it.second - 1)/2;
        return ans % mod;
    }
};