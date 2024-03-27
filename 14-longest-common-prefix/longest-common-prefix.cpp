class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini = INT_MAX;
        for(int i = 0; i < strs.size(); i++)
        {
            if(strs[i].size() < mini)
            {
                mini = i;
            }
        }
        string temp = strs[mini];
        int i = 0;
        int j = temp.size();
        while(j--)
        {
            for(int k = 0; k < strs.size(); k++)
            {
                if(strs[k][i] != temp[i])
                    return temp.substr(0, i);
            }
            i++;
        }
        return temp;
    }
};