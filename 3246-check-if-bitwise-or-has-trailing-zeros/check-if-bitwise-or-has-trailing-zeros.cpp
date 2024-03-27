class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int even = 0;
        for(int num: nums)
        {
            if(num % 2 == 0)
            {
                even++;
            }
            if(even >= 2)
            {
                return true;
            }
        }
        return false;
    }
};