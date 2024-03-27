class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int temp = i;
            int c = 0;
            while(temp)
            {
                if(temp&1)c++;
                if(c > k) break;
                temp = temp>>1;
            }
            if(c == k)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};