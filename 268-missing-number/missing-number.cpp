class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n;
        sort(nums.begin(), nums.end());
        nums.push_back(0);
        for(int i = 0; i<=nums.size();i++) {
            if(nums[i]!=i){
                n = i;
                break;
            }
        }
        return n;
    }
};