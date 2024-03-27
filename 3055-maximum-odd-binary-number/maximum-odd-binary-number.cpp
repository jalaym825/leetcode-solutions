class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int ones = count(s.begin(), s.end(), '1');
        string ans = string(s.size(), '0');
        ans[s.size() - 1] = '1';
        for (int i = 0; i < ones - 1; i++)
        {
            ans[i] = '1';
        }
        return ans;
    }
};
