class Solution
{
public:
    int maximumLength(string s)
    {
        int ans = -1;
        map<string, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                if (s[i] != s[j])
                    break;
                string sub = s.substr(i, j - i + 1);
                mp[sub]++;
                if (mp[sub] >= 3)
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
