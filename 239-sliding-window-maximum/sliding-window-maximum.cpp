class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        multiset<int> s;
        vector<int> ans;
        int i = 0;
        while (i < k)
            s.insert(nums[i++]);

        ans.push_back(*(s.rbegin()));

        for (i = k; i < nums.size(); i++)
        {
            cout << nums[i - k] << endl;
            auto it = s.find(nums[i - k]);
            if (it != s.end())
                s.erase(it);
            s.insert(nums[i]);
            ans.push_back(*(s.rbegin()));
        }
        return ans;
    }
};
