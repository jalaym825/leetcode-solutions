class Solution
{
public:
    int addMinimum(string word)
    {
        if (word.size() == 1)
            return 2;
        int i;
        int x = 0;
        for (i = 0; i < word.size(); i++)
        {
            int y = word[i + 1] - word[i];
            if (i == word.size() - 1)
            {
                x += 2;
            }
            else if (word[i] == 'a' && word[i + 1] == 'b' && word[i + 2] == 'c')
            {
                i += 2;
                continue;
            }
            else if (y <= 0)
            {
                x += 2;
            }
            else if (y >= 1)
            {
                x++;
                i++;
            }
        }
        return x;
    }
};
