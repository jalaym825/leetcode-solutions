class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long ans = 1;
        long long c = 1;

        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[i - 1]) {
                ++c;
                ans += c;
            } else {
                c = 1;
                ans += 1;
            }
        }

        return ans;
    }
};