class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> s;
        int steps = 0;
        int n = nums.size();
        for(int i = n - 1; i >= 0; i--)
        {
            if(nums[i] <= k)
            {
                s.insert(nums[i]);
            }
            steps++;
            if(s.size() == k)
                return steps;
        }
        
        return -1;
    }
};