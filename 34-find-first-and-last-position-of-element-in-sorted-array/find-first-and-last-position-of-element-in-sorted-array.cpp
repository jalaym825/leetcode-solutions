class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int lindex = -1, rindex = -1;
        while (start <= end)
        {
            if (nums[mid] == target)
            {
                lindex = mid;
                end = mid - 1;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        start = 0;
        end = nums.size() - 1;
        mid = start + ((end - start) / 2);
        while (start <= end)
        {
            if (nums[mid] == target)
            {
                rindex = mid;
                start = mid + 1;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            mid = start + ((end - start) / 2);
        }
        return {lindex, rindex};
    }
};