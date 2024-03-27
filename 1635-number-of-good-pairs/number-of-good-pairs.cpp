class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c = 0;
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            c += mp[nums[i]]++;
        }
        return c;
    }
};