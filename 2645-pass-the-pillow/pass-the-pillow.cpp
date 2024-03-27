class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int x = 1;
        int f = 0;
        while (time--)
        {
            if (f == 0)
                x++;
            else
                x--;
            if (x == n)
                f = 1;
            else if (x == 1)
                f = 0;
        }
        return x;
    }
};