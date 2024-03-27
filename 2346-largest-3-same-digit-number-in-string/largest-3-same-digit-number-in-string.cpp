class Solution {
public:
    string largestGoodInteger(string num) {
        int c = 1;
        int ans = -1;
        for(int i = 1; i < num.size(); i++)
        {
            if(num[i] == num[i-1])
                c++;
            if(num[i] != num[i-1])
                c = 1;
            if(c == 3)
            {
                ans = max(ans, num[i] - '0');
                c = 0;
            }
        }
        string str;
        if(ans == -1)
            str = "";
        else if(ans == 0) 
            str = "000";
        else
            str = to_string(ans*111);
        return str;
    }
};