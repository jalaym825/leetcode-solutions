class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        if (s.size() < 3)
        {
            return *next(s.begin(), s.size()-1);
        }
        else
        {
            return *next(s.begin(), s.size() - 3);
        }
    }
};
