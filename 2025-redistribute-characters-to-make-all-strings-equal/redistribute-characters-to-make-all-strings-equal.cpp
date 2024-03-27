class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size() <= 1)
            return true;
        vector<int> v(26);
        for(string str: words)
        {
            for(char ch: str)
            {
                v[ch - 'a']++;
            }
        }
        for(int n: v)
        {
            if(n != 0)
            {
                if(n % words.size() != 0)
                    return false;
            }
        }
        return true;
    }
};