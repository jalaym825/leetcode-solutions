class Solution
{
public:
    int search(vector<int> v, int target)
    {
        int start = 0;
        int end = v.size() - 1;
        int mid = start + ((end - start) / 2);
        while (start <= end)
        {
            if (v[mid] == target)
            {
                return mid;
            }
            if (target < v[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + ((end - start) / 2);
        }
        return -1;
    }
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        if (nums1.size() > nums2.size())
        {
            sort(nums1.begin(), nums1.end());
            int i = 0;
            int isthere;
            while (i < nums2.size())
            {
                isthere = search(nums1, nums2[i]);
                if (isthere > -1)
                {
                    v.push_back(nums2[i]);
                    nums1.erase(nums1.begin() + isthere);
                }
                i++;
            }
        }
        else
        {
            sort(nums2.begin(), nums2.end());
            int i = 0;
            int isthere;
            while (i < nums1.size())
            {
                isthere = search(nums2, nums1[i]);
                if (isthere > -1)
                {
                    v.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + isthere);
                }
                i++;
            }
        }
        return v;
    }
};
