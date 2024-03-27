class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;
        for(auto it: s)
        {
            mp1[it]++;
        }
        for(auto it: t)
        {
            mp2[it]++;
        }
        char ch;
        for(auto it: mp2)
        {
            if(it.second != mp1[it.first])
            {
                ch =  it.first;
                break;
            }
        }
        return ch;
    }
};