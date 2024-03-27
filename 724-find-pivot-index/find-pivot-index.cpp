class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        vector<int> lsum;
        int n = nums.size();
        vector<int> rsum(n);
        for (int i = 0; i < n; i++)
            if (i == 0)
                lsum.push_back(0);
            else
                lsum.push_back(lsum[i - 1] + nums[i - 1]);

        for (int i = n - 1; i >= 0; i--)
            if (i == n - 1)
                rsum[i] = 0;
            else
                rsum[i] = rsum[i + 1] + nums[i + 1];

        for (int i = 0; i < n; i++)
            if (lsum[i] == rsum[i])
                return i;

        return -1;
    }
};
