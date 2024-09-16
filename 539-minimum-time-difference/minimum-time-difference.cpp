class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> v;
        for(string s: timePoints)
        {
            string temp;
            string h, m;
            for(char ch: s)
            {
                if(ch == ':')
                {
                    h = temp;
                    temp.clear();
                }
                else
                    temp.push_back(ch);
            }
            m = temp;
            v.push_back((stoi(h) * 60) + (stoi(m)));
        }
        sort(v.begin(), v.end());
        int ans = INT_MAX;
        for(int i = 0; i < v.size(); i++)
        {
            if(i == 0)
            {
                ans = min(ans, v[0] + (24*60 - v[v.size() - 1]));
                ans = min(ans, abs(v[i] - v[v.size() - 1]));
            }
            else
            {
                ans = min(ans, abs(v[i] - v[i - 1]));
            }
        }
        return ans;
    }
};