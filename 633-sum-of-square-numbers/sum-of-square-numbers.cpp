class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long int i = 0; i * i <= c; i++)
        {
            double b = sqrt(c - i * i);
            if(b == (int) b)
                return 1;
        }
        return 0;
    }
};