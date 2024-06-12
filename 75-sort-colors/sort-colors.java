class Solution {
    public void sortColors(int[] nums) {
        int s = 0;
        int curr = 0;
        int e = nums.length - 1;
        while(curr <= e)
        {
            if(nums[curr] == 0)
            {
                nums[curr] = (nums[curr] + nums[s]) - (nums[s] = nums[curr]);
                s++;
                curr++;
            }
            else if(nums[curr] == 2)
            {
                nums[curr] = (nums[curr] + nums[e]) - (nums[e] = nums[curr]);
                e--;
                if(nums[curr] == 1)
                    curr++;
            }
            else
                curr++;
        }
    }
}