class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m.count(nums[i])) {
                if(abs(i-m[nums[i]])<=k){
                    return true;
                } else {
                    m[nums[i]] = i;
                }
            } else {
                m.insert({nums[i], i});
            }
        }
        return false;
    }
};