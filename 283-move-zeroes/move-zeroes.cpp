class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> v = nums;
        v.erase(std::remove(v.begin(), v.end(), 0), v.end());
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 0) v.push_back(0);
        }
        nums = v;
    }
};