class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i = 0, j = 0, ans = 0;
        deque<int> maxDeque, minDeque;

        while (j < nums.size()) {
            while (!maxDeque.empty() && nums[j] > maxDeque.back()) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(nums[j]);

            while (!minDeque.empty() && nums[j] < minDeque.back()) {
                minDeque.pop_back();
            }
            minDeque.push_back(nums[j]);

            while (!maxDeque.empty() && !minDeque.empty() && maxDeque.front() - minDeque.front() > limit) {
                if (nums[i] == maxDeque.front()) {
                    maxDeque.pop_front();
                }
                if (nums[i] == minDeque.front()) {
                    minDeque.pop_front();
                }
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};
