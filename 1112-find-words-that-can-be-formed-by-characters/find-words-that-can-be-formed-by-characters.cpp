class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        for(auto ch: chars)
            mp[ch]++;
        
        int ans = 0;
        for(auto word: words)
        {
            unordered_map<char, int> temp;
            temp = mp;
            bool f = true;
            for(auto ch: word)
            {
                if(temp[ch] == 0)
                {
                    f = false;
                    break;
                }
                temp[ch]--;
            }
            if(f)
                ans += word.size();
        }
        return ans;
    }
};