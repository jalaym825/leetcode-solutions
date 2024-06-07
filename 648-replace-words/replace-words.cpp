class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> words;
        string tempWord;
        for(char ch: sentence)
        {
            if(ch == ' ')
            {
                words.push_back(tempWord);
                tempWord.clear();
            }
            else
                tempWord.push_back(ch);
        }
        words.push_back(tempWord);
        unordered_map<string, bool> mp;
        for(string word: dictionary)
        {
            mp[word] = true;
        }
        string ans;
        for(string word: words)
        {
            bool found = false;
            string temp;
            for(char ch: word)
            {
                temp.push_back(ch);
                if(mp[temp])
                {
                    found = true;
                    ans += temp + " ";
                    break;
                }
            }
            if(!found)
                ans += word + " ";
        }
        ans.pop_back();
        return ans;
    }
};