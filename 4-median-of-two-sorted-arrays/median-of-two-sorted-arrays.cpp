class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums.size() == 0 || target < nums.front())
            return 0;
        if (target > nums.back())
            return nums.size();
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
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int index;
        for (int i = 0; i < nums2.size(); i++)
        {
            index = searchInsert(nums1, nums2[i]);
            nums1.insert(nums1.begin() + index, nums2[i]);
        }
        if (nums1.size() % 2 == 0)
        {
            return (nums1[(nums1.size() - 1) / 2] + nums1[((nums1.size() - 1) / 2) + 1]) / 2.0;
        }
        else
        {
            return nums1[nums1.size() / 2];
        }
    }
};