class Solution
{
public:
    bool match(char a, char b)
    {
        return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
    }
    bool isValid(string str)
    {
        stack<char> s;
        for (auto ch : str)
        {
            if (ch == '(' || ch == '{' || ch == '[')
                s.push(ch);
            else
            {
                if (s.empty())
                    return false;
                if (match(s.top(), ch))
                    s.pop();
                else
                    return false;
            }
        }
        return s.size() == 0;
    }
};
