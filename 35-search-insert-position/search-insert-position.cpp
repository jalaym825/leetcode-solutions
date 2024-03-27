class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (target > nums.back())
            return nums.size();
        if (target < nums.front())
            return 0;
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            if ((nums[mid] < target && nums[mid + 1] > target))
            {
                return mid + 1;
            }
            if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
};