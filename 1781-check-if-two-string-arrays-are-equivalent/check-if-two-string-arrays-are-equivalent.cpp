class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int i = 0, j = 0;
        int a = 0, b = 0;
        while (i < word1.size() && j < word2.size())
        {
            if (word1[i][a] != word2[j][b])
                return false;
            a++;
            b++;
            if (a == word1[i].size())
            {
                i++;
                a = 0;
            }
            if (b == word2[j].size())
            {
                j++;
                b = 0;
            }
        }
        if (i == word1.size() && j == word2.size() && a == 0 && b == 0)
            return true;
        return false;
    }
};