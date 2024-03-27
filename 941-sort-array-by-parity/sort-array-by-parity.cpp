#define fj(s, e) for (int j = s; j < e; j++)

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int i = 0;
        int n = nums.size();
        fj(0, n)
        {
            if (nums[j] % 2 == 0)
            {
                swap(nums[i++], nums[j]);
            }
        }
        return nums;
    }
};
