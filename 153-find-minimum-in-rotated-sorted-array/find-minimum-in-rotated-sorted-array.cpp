class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        if(nums.front() < nums.back()) return nums.front();
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
        return nums[s];
    }
};
