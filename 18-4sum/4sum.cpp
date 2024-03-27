#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        sort(v.begin(), v.end());
        vector<vector<int>> ans;
        set<vector<int>> temp;
        int n = v.size();
        fi(0, n - 3)
        {
            fj(i + 1, n - 2)
            {
                long long sum1 = (long long)v[i] + v[j];
                int k = j + 1, l = n - 1;
                while (k < l)
                {
                    long long sum2 = (long long)v[k] + v[l];
                    if (sum1 + sum2 == target)
                    {
                        vector<int> tempv = {v[i], v[j], v[k], v[l]};
                        temp.insert(tempv);
                        k++;
                        l--;
                    }
                    else if (sum1 + sum2 > target)
                        l--;
                    else
                        k++;
                }
            }
        }
        return vector<vector<int>>(temp.begin(), temp.end());
    }
};