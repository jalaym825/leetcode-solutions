class Solution
{
public:
    int maxScore(string s)
    {
        vector<int> zeros(s.size());
        zeros[0] = 0;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                c++;
            zeros[i] = c;
        }
        vector<int> ones(s.size());
        ones[s.size() - 1] = 0;
        c = 0;
        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (s[i + 1] == '1')
                c++;
            ones[i] = c;
        }
        int ans = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            ans = max(ans, ones[i] + zeros[i]);
        }
        return ans;
    }
};