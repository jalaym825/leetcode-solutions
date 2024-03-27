class Solution
{
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string> &words, vector<int> &groups)
    {
        vector<string> ans;
        int i = 0;
        int j = i + 1;
        while (j < n)
        {
            if (groups[i] == groups[j])
            {
                j++;
            }
            else
            {
                ans.push_back(words[i]);
                i = j;
                j++;
            }
        }
        ans.push_back(words[i]);
        return ans;
    }
};
