class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        if (colors.size() == 1)
            return 0;
        int i = 0, j = 1;
        int maxi = neededTime[i];
        int ans = 0;
        int tempsum = neededTime[i];
        while (j < colors.size())
        {
            if (colors[j] != colors[i])
            {
                ans += accumulate(neededTime.begin() + i, neededTime.begin() + j, 0) - maxi;
                i = j;
                maxi = neededTime[i];
            }
            else
                maxi = max(neededTime[j], maxi);
            j++;
        }
        ans += accumulate(neededTime.begin() + i, neededTime.begin() + j, 0) - maxi;
        return ans;
    }
};
