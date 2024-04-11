class Solution
{
public:
    int diff(char a, char b)
    {
        return min(abs(a - b), abs((min(a, b) + 26) - max(a, b)));
    }

    string getSmallestString(string s, int k)
    {
        int d1 = diff('x', 'w');
        int d2 = diff('a', 'w');
        if (k == 0)
            return s;

        for (int i = 0; i < s.size(); i++)
        {
            for (int ch = 'a'; ch < s[i]; ch++)
            {
                int d = diff(s[i], ch);
                if (d <= k)
                {
                    s[i] = ch;
                    k -= d;
                    break;
                }
            }
        }
        return s;
    }
};
