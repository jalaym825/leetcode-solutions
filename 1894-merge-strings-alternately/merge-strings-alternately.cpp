class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string str;
        int length = max(word1.size(), word2.size());
        for (int i = 0; i < length; i++)
        {
            if (i < word1.size())
            {
                str.push_back(word1[i]);
            }
            if (i < word2.size())
            {
                str.push_back(word2[i]);
            }
        }
        return str;
    }
};