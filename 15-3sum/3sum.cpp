class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> temp;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-2; i++)
        {
            int j = i + 1, k = n - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    temp.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < 0)
                    j++;
                else
                    k--;
            }
        }
        return vector<vector<int>>(temp.begin(), temp.end());
    }
};