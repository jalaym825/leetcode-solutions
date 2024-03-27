class Solution
{
public:
    string reverseWords(string str)
    {
        int s = 0;
        int e = 0;
        int f = 0;
        string ans;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (f == 1 && str[i] == ' ')
            {
                s = i + 1;
                f = 0;
                string str1(str.begin() + s, str.begin() + e + 1);
                ans.append(str1);
                ans.push_back(' ');
            }
            else if (str[i] != ' ' && f == 0)
            {
                f = 1;
                e = i;
            }
        }
        if (str[0] != ' ')
        {
            string str1(str.begin(), str.begin() + e + 1);
            ans.append(str1);
        }
        if (ans.back() == ' ')
            ans.pop_back();
        return ans;
    }
};