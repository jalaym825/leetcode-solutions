class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
        }
        int c = 0;
        for (auto it : mp)
        {
            while (it.second > 0)
            {
                if (it.second == 1)
                    return -1;
                if (it.second % 3 == 0)
                    it.second -= 3;
                else if (it.second % 2 == 0)
                    it.second -= 2;
                else
                    it.second -= 3;
                c++;
            }
        }
        return c;
    }
};