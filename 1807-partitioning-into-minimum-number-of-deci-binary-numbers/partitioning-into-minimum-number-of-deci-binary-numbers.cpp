class Solution {
public:
    int minPartitions(string n) {
        int ans = -1;
        for(char ch: n)
            ans = max(ans, ch - '0');
        return ans;
    }
};