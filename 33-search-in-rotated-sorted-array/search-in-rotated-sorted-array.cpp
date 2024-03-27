class Solution
{
public:
    int getPivot(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int search(vector<int> &nums, int target)
    {
        int s, e, pn = getPivot(nums);
        if (nums[pn] <= target && target <= nums.back())
        {
            s = pn;
            e = nums.size() - 1;
        }
        else
        {
            s = 0;
            e = pn;
        }
        int mid = s + (e - s) / 2;
        int i = -1;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                i = mid;
                break;
            }
            if (target < nums[mid])
                e = mid - 1;
            else
                s = mid + 1;
            mid = s + (e - s) / 2;
        }
        return i;
    }
};