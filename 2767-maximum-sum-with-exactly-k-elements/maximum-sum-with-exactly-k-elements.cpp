class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int max = *max_element(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += (max + i);
        }
        return ans;
    }
};
