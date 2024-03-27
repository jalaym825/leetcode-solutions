class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i = 0; i < words.size(); i++)
        {
            for(auto ch: words[i])
            {
                if(ch == x)
                {
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};