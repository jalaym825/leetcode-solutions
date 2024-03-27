class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 0;
        int s = 0, e = nums.size() - 1, mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (mid - 1 > 0 && mid + 1 < nums.size() && nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            if (mid + 1 < nums.size() && nums[mid] <= nums[mid + 1])
                s = mid + 1;
            else
                e = mid - 1;
            mid = s + (e - s) / 2;
        }
        return mid;
    }
};