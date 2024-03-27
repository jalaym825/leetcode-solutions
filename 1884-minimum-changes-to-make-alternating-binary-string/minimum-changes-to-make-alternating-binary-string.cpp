class Solution {
public:
    int minOperations(string s) {
        int ans1 = 0;
        string temp = s;
        if(temp[0] == '1')
        {
            temp[0] = '0';
            ans1++;
        }
        for(int i = 1; i < s.size(); i++)
        {
            if(temp[i] == temp[i-1])
            {
                if(temp[i] == '0')
                    temp[i] = '1';
                else 
                    temp[i] = '0';
                ans1++;
            }
        }
        int ans2 = 0;
        temp = s;
        if(temp[0] == '0')
        {
            temp[0] = '1';
            ans2++;
        }
        for(int i = 1; i < s.size(); i++)
        {
            if(temp[i] == temp[i-1])
            {
                if(temp[i] == '0')
                    temp[i] = '1';
                else 
                    temp[i] = '0';
                ans2++;
            }
        }
        return min(ans1, ans2);
    }
};