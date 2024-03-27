#define fi(s, e) for(int i = s; i < e; i++)
#define fj(s, e) for(int j = s; j < e; j++)

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int> s;
        fi(0, nums.size())
        {
            fj(nums[i][0], nums[i][1]+1)
            {
                s.insert(j);
            }
        }
        return s.size();
    }
};