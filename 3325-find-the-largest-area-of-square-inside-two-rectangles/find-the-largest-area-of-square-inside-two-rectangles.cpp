class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long maxArea = 0;
        for (int i = 0; i < bottomLeft.size(); i++) {
            for (int j = i + 1; j < bottomLeft.size(); j++) {
                int minX = max(bottomLeft[i][0], bottomLeft[j][0]);
                int minY = max(bottomLeft[i][1], bottomLeft[j][1]);
                int maxX = min(topRight[i][0], topRight[j][0]);
                int maxY = min(topRight[i][1], topRight[j][1]);
                if (minX < maxX && minY < maxY) {
                    long long side = min(maxX - minX, maxY - minY);
                    maxArea = max(maxArea, side * side);
                }
            }
        }
        return maxArea;
    }
};