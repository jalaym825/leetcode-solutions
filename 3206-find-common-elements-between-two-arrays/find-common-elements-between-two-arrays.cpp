class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, pair<int, bool>> mp;
        for(int n: nums1)
        {
            mp[n].first++;
        }
        int ans1 = 0;
        int ans2 = 0;
        
        
        for(int n: nums2)
        {
            if(mp[n].first > 0)
            {
                if(mp[n].second == false)
                {
                    ans1 += mp[n].first;
                    mp[n].second = true;                    
                }
                ans2++;
            }
        }
        return {ans1, ans2};
    }
};