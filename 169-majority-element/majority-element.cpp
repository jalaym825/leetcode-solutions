class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = 0;
        int occ = 0;
        int elem = nums[0];
        while(curr < nums.size())
        {
            if(occ == 0)
            {
                elem = nums[curr];
            }
            if(nums[curr] == elem)
            {
                occ++;
            }
            else
            {
                occ--;
            }
            curr++;
        }
        if(occ > 0)
            return elem;
        else
            return -1;
    }
};