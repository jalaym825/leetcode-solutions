class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = 0;
        int c = 0;
        if(s.back() != ' ') flag = 1;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(flag) {
                if(s[i] != ' ') {
                    c++;
                } else {
                    break;
                }
            } else if(s[i] != ' ') {
                flag = 1;
                c++;
            }
        }
        return c;
    }
};