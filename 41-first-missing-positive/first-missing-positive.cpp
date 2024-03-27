class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        vector<int> v(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            int val = nums[i];
            if (val > 0 && val <= nums.size())
                v[val] = 1;
        }
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == 0)
                return i;
        }
        return v.size();
    }
};