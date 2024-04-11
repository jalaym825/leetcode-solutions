class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(n == k)
            return "0";
        
        vector<char> st;

        for(char ch: num)
        {
            while(!st.empty() && ch < st.back() && k > 0)
            {
                k--;
                st.pop_back();
            }
            st.push_back(ch);
        }

        while(k > 0)
        {
            st.pop_back();
            k--;
        }

        int j = 0;
        while(st[j] == '0' && j < st.size() - 1) j++;
        string ans(st.begin() + j, st.end());
        return ans.size() ? ans : "0";
    }
};