class Solution
{
public:
    int reverse(int x)
    {
        string str;
        long double n;
        if (x > 0)
        {
            str = to_string(x);
            std::reverse(str.begin(), str.end());
            n = stold(str);
        }
        else if (x < 0)
        {
            str = to_string(x);
            str.erase(str.begin());
            std::reverse(str.begin(), str.end());
            n = stold(str) * -1;
        }
        if (n > (long double)2147483647 || n < (long double)-2147483648)
            n = 0;
        return (int)n;
    }
};