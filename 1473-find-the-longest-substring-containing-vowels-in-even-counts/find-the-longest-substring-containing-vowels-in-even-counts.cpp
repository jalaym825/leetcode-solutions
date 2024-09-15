class Solution {
public:
    int findTheLongestSubstring(std::string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};
        
        int mask = 1;
        for (char c : vowels) {
            mp[c] = mask;
            mask *= 2;
        }
        
        mask = 0;
        int ans = 0;
        vector<int> seen(32, -1);
        
        for (int i = 0; i < n; ++i) {
            mask ^= mp.count(s[i]) ? mp[s[i]] : 0;
            if (mask != 0 && seen[mask] == -1) {
                seen[mask] = i;
            }
            ans = max(ans, i - seen[mask]);
        }
        return ans;
    }
};
