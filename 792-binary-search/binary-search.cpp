class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start+(end-start)/2;
        int i = -1;
        while(start<=end) {
            if(target == nums[mid]) {
                i = mid;
                break;
            }
            if(nums[mid] < target) {
                start = mid+1;
            } else {
                end = mid - 1;
            }
            mid = start+(end-start)/2;
        }
        return i;
    }
};