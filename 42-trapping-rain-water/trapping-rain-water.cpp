class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lMax = 0;
        int rMax = 0;
        int l = 0;
        int r = n - 1;
        int res = 0;
        while(l < r)
        {
            if(height[l] <= height[r])
            {
                if(height[l] >= lMax)
                    lMax = height[l];
                else
                    res += lMax - height[l];
                l++;
            }
            else
            {
                if(height[r] >= rMax)
                    rMax = height[r];
                else
                    res += rMax - height[r];
                r--;
            }
        }
        return res;
    }
};