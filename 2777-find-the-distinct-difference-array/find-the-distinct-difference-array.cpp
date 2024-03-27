
class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            unordered_set<int> s(nums.begin() + i + 1, nums.end());
            unordered_set<int> p(nums.begin(), nums.begin() + i + 1);
            ans.push_back(p.size() - s.size());
        }
        return ans;
    }
};
