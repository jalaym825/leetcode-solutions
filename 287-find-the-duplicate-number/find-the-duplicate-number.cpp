class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> v(nums.size() + 2);
        for(int num: nums)
            if(v[num] == true)
                return num;
            else
                v[num] = true;
        return 0;
    }
};