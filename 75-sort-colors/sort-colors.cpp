class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int ones = 0, tows = 0, zeros = 0;
        for (auto it : nums)
        {
            if (it == 0)
                zeros++;
            if (it == 1)
                ones++;
            if (it == 2)
                tows++;
        }
        int i = 0;
        for (; i < zeros; i++)
            nums[i] = 0;
        for (; i < zeros + ones; i++)
            nums[i] = 1;
        for (; i < zeros + ones + tows; i++)
            nums[i] = 2;
    }
};
