#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define sor(x) sort(all(x))
class Solution
{
public:
    long long minOperationsToMakeMedianK(vector<int> &nums, int k)
    {
        long long ans = 0, mid = nums.size() / 2;
        sor(nums);
        for (int i = mid - 1; i >= 0 && nums[i] > k; --i)
            ans += nums[i] - k;
        for (int i = mid + 1; i < nums.size() && nums[i] < k; ++i)
            ans += k - nums[i];
        return ans + abs(nums[mid] - k);
    }
};
