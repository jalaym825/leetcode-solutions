class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string, int> ump;

        for(int num: arr1)
        {
            string str = to_string(num);
            string pre;
            for(char ch: str)
            {
                pre += ch;
                ump[pre]++;
            }
        }
        
        int ans = 0;
        for(int num: arr2)
        {
            string str = to_string(num);
            string pre;
            for(char ch: str)
            {
                pre += ch;
                if(ump[pre] > 0)
                {
                    ans = max(ans, (int)pre.size());
                }
            }
        }
        return ans;
    }
};