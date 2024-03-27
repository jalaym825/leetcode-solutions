class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0) return false;
        long int y = 0;
        long int temp = x;
        while (x>0) {
            y*=10;
            y+=x%10;
            x/=10;
        }
        if (temp == y)return true; else return false;
    }
};