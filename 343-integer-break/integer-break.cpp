class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        int ans = 1;
        while(n>0)
        {
            if(n == 1)
            {
                n-=1;
                ans/=3;
                ans*=4;
            }
            else if(n == 2)
            {
                n -= 2;
                ans *= 2;
            }
            else
            {
                n-=3;
                ans *= 3;
            }
        }
        return ans;
    }
};