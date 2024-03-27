class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<bool> v(nums.size() + 1);
        vector<int> ans;
        for(int num: nums)
        {
            if(v[num])
                ans.push_back(num);
            else
                v[num] = true;
        }
        return ans;
    }
};