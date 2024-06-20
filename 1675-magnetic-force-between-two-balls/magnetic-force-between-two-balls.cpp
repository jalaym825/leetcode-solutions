class Solution {
public:
    bool isValidConfig(vector<int> &p, int gap, int m)
    {
        int prev = p[0];
        int filled = 1;
        for(int i = 1; i < p.size(); i++)
        {
            if(p[i] - prev >= gap)
            {
                prev = p[i];
                filled++;
            }
            if(filled >= m) return true;
        }
        return filled >= m;
    }

    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(), p.end());
        int s = 1;
        int e = p.back() - p.front();
        int ans = -1;
        
        while(s <= e)
        {
            int mid = s + (e - s) / 2;
            if(isValidConfig(p, mid, m))
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return ans;
    }
};
