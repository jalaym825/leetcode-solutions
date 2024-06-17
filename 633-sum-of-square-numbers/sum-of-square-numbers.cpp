class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long int i = 0; i * i <= c; i++)
        {
            // made b subject from formula
            double b = sqrt(c - i * i);
            // if b is compelete square, b will be int, return 1
            if(b == (int) b)
                return 1;
        }
        return 0;
    }
};