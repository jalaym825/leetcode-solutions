class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        int temp = sqrt(n);
        for(int i = 1; i <= temp; i++)
        {
            if(n % i == 0)
            {
                v.push_back(i);
                if(i != n/i)
                v.push_back(n/i);
            }
        }
        sort(v.begin(), v.end());
        return k > v.size() ? -1 : v[k - 1];
    }
};