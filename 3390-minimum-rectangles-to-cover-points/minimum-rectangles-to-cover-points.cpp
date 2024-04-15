class Solution {
public:
    static bool sortByFirstElement(const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];
    }

    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(), points.end(), sortByFirstElement);
        int ans = 0;
        for(int i = 0; i < points.size();)
        {
            int curr = points[i][0];
            ans++;
            i++;
            while(i < points.size() && points[i][0] <= curr + w)
                i++;
        }
        return ans;
    }
};