class Solution
{
public:
    vector<vector<int>> ans;
    void f1(int i, vector<int> v, int n, vector<int> subset = {})
    {
        if (i >= n)
        {
            ans.push_back(subset);
            return;
        }
        // take
        subset.push_back(v[i]);
        f1(i + 1, v, n, subset);
        // not take
        subset.pop_back();
        f1(i + 1, v, n, subset);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        f1(0,nums, nums.size());
        return ans;
    }
};
