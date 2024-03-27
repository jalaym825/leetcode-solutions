class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1 || x == 0) return x;
        double ans = 1;
        bool isNegative = false;
        unsigned long int n1 = n;
        if(n<0) {
            n1 = 1LL * n * -1;
            isNegative = true;
        }
        while(n1 > 0) {
            if(n1&1) {
                ans = ans * x;
            }
            x *= x;
            n1 = n1>>1;
        }
        if(isNegative) {
            ans = 1/ans;
        }
        return ans;
    }
};