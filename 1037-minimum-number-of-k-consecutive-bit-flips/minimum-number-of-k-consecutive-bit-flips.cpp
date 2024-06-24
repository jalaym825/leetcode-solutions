class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int> q;
        int flips = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(!q.empty() && q.front() < i)
                q.pop();
            if(q.size() % 2 == nums[i])
            {
                if(i + k - 1 >= nums.size())
                    return -1;
                q.push(i + k - 1);
                flips++;
            }
        }
        return flips;
    }
};