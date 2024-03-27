class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str;
        for(auto it: words) {
            str.push_back(it[0]);
        }
        return s == str;
    }
};