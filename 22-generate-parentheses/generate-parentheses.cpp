class Solution {
public:
    vector<string> res;
    int size;
    void fun(string s, int o, int c) {
        if(s.size() == 2 * size) {
            res.push_back(s);
            return;
        }
        if(c >= o && o != 0) {
            fun(s + '(', o - 1, c);
        }
        if(o < c && c != 0) {
            fun(s + ')', o, c - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        size = n;
        fun("", n, n);
        return res;
    }
};