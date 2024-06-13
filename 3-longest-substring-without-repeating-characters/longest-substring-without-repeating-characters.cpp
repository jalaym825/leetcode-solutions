class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, ans = 0, n = s.size();
        vector<int> v(128, 0);
        
        while (j < n) {
            v[s[j]]++;
            
            while (v[s[j]] > 1) {
                v[s[i]]--;
                i++;
            }
            
            ans = max(ans, j - i + 1);
            j++;
        }
        
        return ans;
    }
};
