class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        vector<int> v;
        int j = 0;
        for (int i = 1; i <= arr.back(); i++)
        {
            if (i != arr[j])
            {
                v.push_back(i);
            }
            else
            {
                j++;
            }
        }
        if (v.size() < k)
        {
            if (v.size())
            {
                int l = v.size();
                for (int i = 0; i < k - l; i++)
                {
                    v.push_back(arr.back() + i + 1);
                }
                return v.at(k - 1);
            }
            else
                return arr.back() + k;
        }
        return v.at(k - 1);
    }
};