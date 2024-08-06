class Solution {
public:
    int minimumPushes(string word) {
        vector<int> v(26);
        for(char ch: word) {
            v[ch-'a']++;
        }

        sort(v.rbegin(), v.rend());
        
        int i = 0;
        int ans = 0;
        for(int n: v) 
        {
            ans += n * (i/8 + 1);
            i++;
        }
        return ans;
    }
};