class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1(1001);
        vector<int> v2(1001);
        for(int i = 0; i < nums1.size(); i++)
        {
            v1[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++)
        {
            v2[nums2[i]]++;
        }

        vector<int> ans;
        for(int i = 0; i < v1.size(); i++)
        {
            if(min(v1[i], v2[i]) > 0)
            {
                for(int j = 0; j < min(v1[i], v2[i]); j++)
                    ans.push_back(i);
            }
        }
        return ans;

    }
};