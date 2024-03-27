class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> strings;
        unordered_map<string, vector<string>> m;

        for(auto str: strs)
        {
            string temp = str;
            sort(temp.begin(), temp.end());
            m[temp].push_back(str);
        }

        for(auto it: m)
        {
            strings.push_back(it.second);
        }

        return strings;
    }
};