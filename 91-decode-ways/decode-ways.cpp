class Solution {
public:
    int fun(vector<int> &memo, string &s, int &n, int i)
    {
        if (i > n || s[i] == '0')
            return 0;

        if (i == n)
            return 1;

        if (memo[i] != -1)
            return memo[i];

        int take1 = fun(memo, s, n, i+1);
        int take2 = s.substr(i, 2) <= "26" ? fun(memo, s, n, i+2) : 0;

        return memo[i] = take1 + take2;
    }
    int numDecodings(string s) {
        int n = s.size();
        vector<int> memo(n, -1);
        return fun(memo, s, n, 0);
    }
};