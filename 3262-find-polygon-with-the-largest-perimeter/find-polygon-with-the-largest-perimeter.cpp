
class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        sort(nums.rbegin(), nums.rend());
        for (int i = 0; i < nums.size(); i++)
        {
            long long maxi = nums[i];
            long long sum = accumulate(nums.begin() + i + 1, nums.end(), 0LL);
            if(maxi < sum)
                return maxi + sum;
        }
        return -1;
    }
};
