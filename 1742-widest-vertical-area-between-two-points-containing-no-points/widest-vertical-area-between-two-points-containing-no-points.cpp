class Solution {
public:
    static bool compare(const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];
    }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int ans = INT_MIN;
        for(int i = 0; i < points.size() - 1;  i++)
        {
            ans = max(points[i + 1][0] - points[i][0], ans);
        }
        return ans;
    }
};