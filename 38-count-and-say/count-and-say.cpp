class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        if (n == 2)
            return "11";
        string str = "11";
        for (int i = 3; i <= n; i++)
        {
            string temp = "";
            char n;
            int count = 0;
            for (int j = 0; j < str.size(); j++)
            {
                count++;
                if (j == str.size() || str[j] != str[j + 1])
                {
                    n = str[j];
                    temp += to_string(count) + to_string(n - '0');
                    count = 0;
                }
            }
            str = temp;
        }
        return str;
    }
};
