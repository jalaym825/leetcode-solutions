class Solution {
public:
    bool isPerfectSquare(int num) {
        long double n;
        for(int i = 0; ; i++) {
            n = (long double)i*i;
            if(n == (long double)num) {
                return true;
            }
            if(n>(long double)num) {
                return false;
            }
        }
        return false;
    }
};