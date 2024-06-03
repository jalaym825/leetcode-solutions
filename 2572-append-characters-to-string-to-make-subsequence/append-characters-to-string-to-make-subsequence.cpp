class Solution {
public:
    int appendCharacters(string s, string t) {
        int k = -1;
        int j = 0;
        for(int i = 0; i < t.size(); i++)
        {
            char ch = t[i];
            while(j < s.size())
            {
                if(s[j] == ch)
                {
                    k++;
                    j++;
                    break;
                }
                j++;
            }
        }
        return t.size() - k - 1;
    }
};