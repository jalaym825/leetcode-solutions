class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int maxi = 1;
        for(int n: nums)
        {
            mp[n]++;
            maxi = max(maxi, mp[n]);
        }
        int ans = 0;
        for(auto it: mp)
            
        {
            if(it.second == maxi)
            {
                ans+=it.second;
            }
        }
        return ans;
    }
};