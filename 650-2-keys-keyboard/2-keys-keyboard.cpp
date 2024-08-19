class Solution {
public:
    int ans = INT_MAX;
    void fun(int curr, int i, int copied, int n)
    {
        if(curr >= n)
        {
            if(curr == n)
                ans = min(ans, i);
            return;
        }
        fun(curr + copied, i + 1, copied, n);
        fun(curr + curr, i + 2, curr, n);
    }

    int minSteps(int n) {
        if(n == 1)
            return 0;
        fun(1, 1, 1, n);
        return ans;
    }
};