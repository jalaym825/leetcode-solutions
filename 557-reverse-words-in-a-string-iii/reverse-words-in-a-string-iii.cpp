class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<char> st;
        for(auto it: s)
        {
            if(it != ' ')
            {
                st.push(it);
            }
            else
            {
                string temp;
                while(!st.empty())
                {
                    temp.push_back(st.top());
                    st.pop();
                }
                ans += temp + ' ';
            }
        }
        if(!st.empty())
        {
            string temp;
            while(!st.empty())
            {
                temp.push_back(st.top());
                st.pop();
            }
            ans += temp;
        }
        return ans;
    }
};