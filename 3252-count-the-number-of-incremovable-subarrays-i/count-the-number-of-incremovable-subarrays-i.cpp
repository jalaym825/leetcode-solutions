
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i; j < nums.size(); j++)
            {
                vector<int> v;
                for(int k = 0; k < i; k++)
                    v.push_back(nums[k]);
                for(int k = j + 1; k < nums.size(); k++)
                    v.push_back(nums[k]);
                set<int> st(v.begin(), v.end());
                if(vector<int>(st.begin(), st.end()) == v)
                    ans++;
            }
        }
        return ans;
    }
};

