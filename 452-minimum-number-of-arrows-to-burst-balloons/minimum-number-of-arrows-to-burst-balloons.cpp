class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int lastPoint = points[0][1];
        int ans = 1;
        for(auto p : points) {
            if(p[0] > lastPoint) {
                ans++;
                lastPoint = p[1];
            }
            lastPoint = min(p[1], lastPoint);
        }
        return ans;
    }
};
