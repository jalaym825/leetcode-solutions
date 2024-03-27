class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> n1;
        vector<int> n2;
        n1.push_back(nums[0]);
        n2.push_back(nums[1]);
        for(int i = 2; i < nums.size(); i++)
        {
            if(n1.back() > n2.back())
            {
                n1.push_back(nums[i]);
            }
            else
            {
                n2.push_back(nums[i]);
            }
        }
        for(int i = 0; i < n2.size(); i++)
        {
            n1.push_back(n2[i]);
        }
        return n1;
    }
};