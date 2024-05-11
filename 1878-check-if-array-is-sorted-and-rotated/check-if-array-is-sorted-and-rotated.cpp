class Solution
{
public:
    bool check(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0, j = i;
            int k = (j + 1) % nums.size();
            bool issorted = true;
            while (count < nums.size() - 1)
            {
                if (nums[k] < nums[j])
                {
                    issorted = false;
                    break;
                }
                j++;
                j = j % nums.size();
                k++;
                k = k % nums.size();
                count++;
            }
            if (issorted)
            {
                return true;
            }
        }
        return false;
    }
};
