#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long maxi = INT_MIN;
        fi(0, nums.size() - 2)
        {
            fj(i + 1, nums.size() - 1)
            {
                fk(j + 1, nums.size())
                {
                    maxi = max(maxi, (nums[i] - nums[j]) * (long long)nums[k]);
                }
            }
        }
        return maxi < 0 ? 0 : maxi;
    }
};
