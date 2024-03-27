class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (i + 1 == nums.size() || nums[i] != nums[i + 1])
                {
                    n = nums[i];
                    break;
                }
            }
        }
        return n;
    }
};