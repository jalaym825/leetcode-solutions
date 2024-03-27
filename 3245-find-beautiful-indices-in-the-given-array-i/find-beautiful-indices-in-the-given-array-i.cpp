class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> result;
        int n = s.size() - a.size();
        for (int i = 0; i <= n; ++i)
        {
            if (s.substr(i, a.size()) == a)
            {
                for (int j = max(0, i - k); j <= min((int)(s.size() - b.size()), i + k); ++j)
                {
                    if (s.substr(j, b.size()) == b && abs(j - i) <= k)
                    {
                        result.push_back(i);
                        break;
                    }
                }
            }
        }
        return result;
    }
};