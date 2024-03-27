class Solution {
public:
    static bool cmp(pair<char, int> &pa, pair<char, int> &pb)
    {
        return pa.second > pb.second;
    }
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char ch: s)
        {
            mp[ch]++;
        }
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), cmp);
        string ans;
        for(auto it: vec)
        {
            for(int i = 0; i < it.second; i++)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};