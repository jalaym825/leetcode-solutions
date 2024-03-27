class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        int maxi = max(max(a, b), c);
        if(maxi >= a + b + c - maxi)
            return "none";
        if(a == b && b == c && a == c)
        {
            return "equilateral";
        }
        else if(a == b || b == c || a == c)
        {
            return "isosceles";
        }
        else
            return "scalene";
    }
};