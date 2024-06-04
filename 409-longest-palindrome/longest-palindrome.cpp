class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        int maxiOdd = -1;
        for(char ch: s)
            mp[ch]++;

        for(auto it: mp)
            if(it.second % 2 == 1)
                maxiOdd = max(maxiOdd, it.second);

        int ans = 0;
        bool taken = false;
        for(auto it: mp)
        {
            if(it.second % 2 == 0)
                ans += it.second;
            else if(it.second % 2 == 1)
            {
                if(it.second == maxiOdd && !taken)
                {
                    taken = true;
                    ans += it.second;
                }
                else
                {
                    ans += it.second - 1;
                }
            }
        }
        return ans;
    }
};