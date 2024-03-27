class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26);
        for(char ch: s)
            v1[ch-'a']++;
        vector<int> v2(26);
        for(char ch: t)
            v2[ch-'a']++;
        return v1 == v2;
    }
};