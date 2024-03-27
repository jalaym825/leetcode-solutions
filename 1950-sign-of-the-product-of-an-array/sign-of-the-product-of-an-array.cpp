class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x = 1;
        for(auto it: nums) {
            if(it == 0) 
                return 0;
            if(it < 0)
                x *= -1;
        }
        return x;
    }
};