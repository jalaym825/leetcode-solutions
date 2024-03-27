class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            map<char, int> mp;
            bool broken = false;
            int j = i;
            for(; j < s.size(); j++)
            {
                mp[s[j]]++;
                if(mp[s[j]] >= 3){
                    broken = true;
                    break;
                }
            }
            ans = max(ans, j-i);
        }
        return ans;
    }
};