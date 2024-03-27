class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int size = nums.size();
        vector<int> ans;
        for(int i = 0; i < size; i++)
            m[nums[i]] = i;
        for(int i = 0; i < size; i++)
            if(m.count(target - nums[i]) > 0 && m[target - nums[i]] != i)
                return {i, m[target - nums[i]]};
        return {};
    }
};
