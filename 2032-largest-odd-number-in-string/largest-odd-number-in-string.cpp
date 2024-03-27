class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size();
        for(int i = size - 1; i >= 0; i--)
        {
            int n = num[i] - '0';
            if(n % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};