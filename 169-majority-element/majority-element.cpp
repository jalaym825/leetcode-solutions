class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.front();
        int c = 1, c1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 != nums.size() && nums[i] == nums[i + 1])
            {
                c++;
                if (c > c1)
                    n = nums[i];
            }
            else
            {
                if (c > c1)
                    c1 = c;
                c = 1;
            }
        }
        return n;
    }
};
