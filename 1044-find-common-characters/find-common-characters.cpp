class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        for(int i = 0; i < 26; i++)
        {
            char ch = i + 'a';
            int minFreq = INT_MAX;
            for(string word: words)
            {
                int currFreq = 0;
                for(char ch1: word)
                    if(ch1 == ch)
                        currFreq++;
                minFreq = min(minFreq, currFreq);
                if(minFreq == 0)
                    break;
            }
            for(int i = 0; i < minFreq; i++)
            {
                string temp;
                temp.push_back(ch);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};