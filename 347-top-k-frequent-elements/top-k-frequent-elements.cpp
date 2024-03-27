class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m; 
        for(auto it: nums) {
            m[it]++;
        }

        vector<pair<int, int>> v;
        for(auto it: m)
        {
            v.push_back(it);
        }

        sort(v.begin(), v.end(), cmp);

        int c = 0;
        vector<int> ans;
        for(auto it: v)
        {
            ans.push_back(it.first);
            c++;
            if(c == k) 
                break;
        }
        return ans;
    }
};