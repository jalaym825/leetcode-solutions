
class Solution
{
public:
    bool search(string str, char c)
    {
        int s = 0, e = str.size() - 1, mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (str[mid] == c)
            {
                return true;
            }
            if (str[mid] < c)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return false;
    }
    vector<string> findWords(vector<string> &words)
    {
        string str1 = "eiopqrtuwy";
        string str2 = "adfghjkls";
        string str3 = "bcmnvxz";
        vector<string> v;
        int row;
        for (int i = 0; i < words.size(); i++)
        {
            string str = words[i];
            transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);
            if (search(str1, words[i][0]))
            {
                row = 1;
            }
            else if (search(str2, words[i][0]))
            {
                row = 2;
            }
            else
            {
                row = 3;
            }
            int j = 0;
            for (j = 0; j < words[i].size(); j++)
            {
                if (row == 1)
                {
                    if (!search(str1, words[i][j]))
                    {
                        break;
                    }
                }
                else if (row == 2)
                {
                    if (!search(str2, words[i][j]))
                    {
                        break;
                    }
                }
                else
                {
                    if (!search(str3, words[i][j]))
                    {
                        break;
                    }
                }
            }
            if (j == words[i].size())
            {
                v.push_back(str);
            }
        }
        return v;
    }
};