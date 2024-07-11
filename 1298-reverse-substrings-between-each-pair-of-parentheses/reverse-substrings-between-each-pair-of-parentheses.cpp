class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string ans;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ')') {
                string str;
                while(!st.empty() && st.top() != '(')
                {
                    str.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for(int j = 0; j < str.size(); j++)
                    st.push(str[j]);
            } else {
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
