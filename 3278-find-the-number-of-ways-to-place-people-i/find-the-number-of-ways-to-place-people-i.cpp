#define pii pair<int, int>


class Solution
{
public:
    bool check2(pii tl, pii br)
    {
        return tl.first <= br.first && tl.second >= br.second;
    }
    bool check1(pii p, pii tl, pii br)
    {
        int x = p.first;
        int y = p.second;
        int x1 = tl.first;
        int y1 = tl.second;
        int x2 = br.first;
        int y2 = br.second;

        if (!check2(tl, br))
            return false;

        if (x1 <= x && x <= x2 && y1 >= y && y >= y2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int numberOfPairs(vector<vector<int>> &points)
    {
        vector<vector<int>> p1 = points;
        vector<pii> p;
        for (auto it : p1)
            p.push_back(make_pair(it[0], it[1]));

        int n = p.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (check2(p[i], p[j]))
                {
                    bool flag = true;
                    for (int k = 0; k < n; k++)
                    {
                        if (k == i || k == j)
                            continue;

                        if (check1(p[k], p[i], p[j]))
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag)
                        ans++;
                }
            }
        }
        return ans;
    }
};
