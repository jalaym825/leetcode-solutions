class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxArea = 0;
        int lh;
        int rh;
        while(l < r) {
            lh = height[l];
            rh = height[r];
            maxArea = max(maxArea, min(lh, rh)*(r-l));
            if(lh < rh) {
                l++;
            } else {
                r--;
            }
        }
        return maxArea;
    }
};