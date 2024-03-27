class Solution {
public:
    bool isPalindrome(string str) {
        int s = 0;
        int e = str.size() - 1;
        while(s <= e) 
        {
            if(isalnum(str[s]) && isalnum(str[e]))
            {
                if(tolower(str[s]) != tolower(str[e])) return false;
                s++;
                e--;
            }
            else {
                if(!isalnum(str[s]))
                {
                    s++;
                }
                if(!isalnum(str[e]))
                {
                    e--;
                }
            }
        }
        return true;
    }
};