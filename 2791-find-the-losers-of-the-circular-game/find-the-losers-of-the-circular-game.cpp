class Solution
{
public:
    vector<int> circularGameLosers(int n, int k)
    {
        if (n == 1 && k == 1)
            return {};
        vector<int> v(n, 0);
        int x = 1;
        v[0] = 1;
        for (int i = 1; true; i++)
        {
            x += (i * k);
            if (x > n)
                x %= n;
            if (x == 0)
                x = n;
            if (v[x - 1] == 1)
                break;
            v[x - 1] = 1;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                ans.push_back(i + 1);
        }
        return ans;
    }
};
