class Solution {
public:
    long long minimumSteps(string s) {
        vector<int> v(s.size() + 1);
        for(int i = s.size() - 1; i >= 0; i--)
        {
            v[i] = v[i + 1] + (s[i] == '0');
        }
        long long ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
                ans += v[i];
        }
        return ans;
    }
};