class Solution {
public:
    string addOne(string s)
    {
        int c = 1;
        int i = s.size() - 1;
        for(; i >= 0; i--)
        {
            char curr = s[i];
            if(curr == '1')
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
                c = 0;
                break;
            }
        }
        if(i < 0 && c == 1)
        {
            s = '1' + s;
        }
        return s;
    }
    int numSteps(string s) {
        int ans = 0;
        while(s.size() != 1)
        {
            if(s.back() == '0')
            {
                s.pop_back();
            }
            else
            {
                s = addOne(s);
            }
            ans++;
        }
        return ans;
    }
};
