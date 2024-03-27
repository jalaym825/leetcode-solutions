class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 = INT_MIN;
        int m2 = INT_MIN;
        for(auto num: nums)
        {
            if(num >= m1)
            {
                m2 = m1;
                m1 = num;
            }
            else if(num > m2)
            {
                m2 = num;
            }
        }
        return (m1 - 1) * (m2 - 1);
    }
};