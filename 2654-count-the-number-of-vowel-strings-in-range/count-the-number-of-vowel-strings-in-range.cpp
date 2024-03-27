class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int c = 0;
        for(int i = left; i <= right; i++) {
            //97, 101, 105, 111, and 117
            int f = words[i].front(), b = words[i].back();
            if((f == 97 || f == 101 || f == 105 || f == 111 || f == 117) && (b == 97 || b == 101 || b == 105 || b == 111 || b == 117)) {
                c++;
            }
        }
        return c;
    }
};