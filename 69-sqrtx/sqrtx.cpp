class Solution
{
public:
    int mySqrt(int x)
    {
        int start = 0;
        int end = x;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if ((double)mid * mid == (double)x || ((double)mid * mid < (double)x && (double)(mid + 1) * (mid + 1) > (double)x))
            {
                return mid;
            }
            if ((double)mid * mid > (double)x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }
};
