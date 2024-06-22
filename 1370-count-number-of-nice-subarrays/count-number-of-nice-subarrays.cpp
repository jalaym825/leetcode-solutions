class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0, j = 0, n = nums.size(), odds = 0, ans = 0, temp = 0;
        
        while (j < n) {
            if (nums[j] % 2 == 1) {
                odds++;
                temp = 0;
            }
            
            while (odds == k) {
                temp++;
                if (nums[i] % 2 == 1) {
                    odds--;
                }
                i++;
            }
            
            ans += temp;
            j++;
        }
        
        return ans;
    }
};
