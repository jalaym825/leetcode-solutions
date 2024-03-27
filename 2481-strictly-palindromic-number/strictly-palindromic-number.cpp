class Solution
{
public:
    bool isStrictlyPalindromic(int n)
    {
        for (int i = 2; i <= n - 2; i++)
        {
            int temp = n;
            string s, t;
            while (temp > 0)
            {
                int m = temp % i;
                char ch = m + 48;
                s.push_back(ch);
                temp = temp / i;
            }
            t = s;
            reverse(s.begin(), s.end());
            if (s != t)
                return false;
        }
        return true;
    }
};