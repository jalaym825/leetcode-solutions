class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        int sum = 0;
        vector<vector<int>> v(nums.size(), vector<int>(nums[0].size()));

        for (int i = 0; i < nums.size(); i++)
            sort(nums[i].begin(), nums[i].end());

        int s = nums[0].size();
        for (int i = 0; i < s; i++)
        {
            int max = INT_MIN;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j].back() > max)
                    max = nums[j].back();
                nums[j].pop_back();
            }
            sum += max;
        }
        return sum;
    }
};