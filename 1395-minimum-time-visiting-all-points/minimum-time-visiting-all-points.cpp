class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t = 0;
        for(int i = 1; i < points.size(); i++)
        {
            int xDiff = abs(points[i-1][0] - points[i][0]);
            int yDiff = abs(points[i-1][1] - points[i][1]);
            t += max(xDiff, yDiff);
        }
        return t;
    }
};