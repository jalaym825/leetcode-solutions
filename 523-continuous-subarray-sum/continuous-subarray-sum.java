class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        mp.put(0, -1);
        int preSum = nums[0];
        mp.put(preSum % k, 0);
        for(int i = 1; i < nums.length; i++)
        {
            if((nums[i] == nums[i-1] && nums[i] == 0) || (nums[i] % k == 0 && nums[i - 1] == 0))
                return true;
            preSum += nums[i];
            if(preSum % k == 0)
                return true;
            System.out.println(preSum + " " + preSum % k);
            if(mp.containsKey(preSum % k) && i - mp.get(preSum % k) >= 2)
                return true;
            mp.put(preSum % k, i);
        }
        return false;
    }
}