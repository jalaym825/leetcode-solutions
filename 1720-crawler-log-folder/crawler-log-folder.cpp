class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(int i = 0; i < logs.size(); i++)
        {
            if(logs[i].compare("../") == 0)
            {
                if(!st.empty())
                    st.pop();
            }
            else if(logs[i].compare("./") != 0)
            {
                st.push(logs[i]);
            }
        }
        int ans = 0;
        while(!st.empty())
        {
            ans++;
            st.pop();
        }
        return ans;
    }
};