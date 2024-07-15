class Solution {
public:
    int minimumCost(int m, int n, vector<int>& hcut, vector<int>& vcut) {
        sort(hcut.rbegin(), hcut.rend());
        sort(vcut.rbegin(), vcut.rend());

        int hcuts = 1;
        int vcuts = 1;
        int ans = 0;

        int i = 0, j = 0;
        while(i < hcut.size() && j < vcut.size())
        {
            if(hcut[i] > vcut[j])
            {
                ans += hcut[i] * vcuts;
                hcuts++;
                i++;
            }
            else
            {
                ans += vcut[j] * hcuts;
                vcuts++;
                j++;
            }
        }
        while(i < hcut.size())
        {
            ans += hcut[i] * vcuts;
            hcuts++;
            i++;
        }
        while(j < vcut.size())
        {
            ans += vcut[j] * hcuts;
            vcuts++;
            j++;
        }
        return ans;
    }
};