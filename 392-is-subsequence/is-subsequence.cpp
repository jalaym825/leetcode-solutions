class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.size() == t.size())
            return s == t;
        if (s.size() > t.size())
            return false;
        int p1 = 0, p2 = 0, n = t.size(), sSize = s.size();
        while (p2 < n)
        {
            if (s[p1] == t[p2])
            {
                p1++;
                if (p1 >= sSize)
                    break;
            }
            p2++;
        }
        return p1 == s.size();
    }
};
