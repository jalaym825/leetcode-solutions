class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty()) return nums;
        
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int range = maxi - mini + 1;
        
        vector<int> count(range, 0);

        for (int num : nums) {
            count[num - mini]++;
        }

        int index = 0;
        for (int i = 0; i < range; ++i) {
            while (count[i] > 0) {
                nums[index++] = i + mini;
                count[i]--;
            }
        }

        return nums;
    }
};
