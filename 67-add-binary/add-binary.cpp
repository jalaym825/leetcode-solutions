class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        int ans = 0;
        string str;
        int length = a.size() > b.size() ? a.size() : b.size();
        for (int i = 0; i <= length; i++)
        {
            ans = (i < a.size() ? a.at(a.size() - i - 1) - 48 : 0) + (i < b.size() ? b.at(b.size() - i - 1) - 48 : 0) + carry;
            if (ans == 2)
            {
                carry = 1;
                str.push_back('0');
            }
            else if (ans == 3)
            {
                carry = 1;
                str.push_back('1');
            }
            else if (ans == 1)
            {
                carry = 0;
                str.push_back('1');
            }
            else if (ans == 0 && i != length)
            {
                carry = 0;
                str.push_back('0');
            }
        }
        reverse(str.begin(), str.end());
        return str;
    }
};