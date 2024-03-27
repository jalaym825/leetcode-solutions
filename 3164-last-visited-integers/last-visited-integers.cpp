class Solution
{
public:
    vector<int> lastVisitedIntegers(vector<string> &words)
    {
        vector<int> temp;
        vector<int> v;
        int k = 0;
        for (auto it : words)
        {
            if (it == "prev")
            {
                k++;
                if (k > temp.size())
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(temp[temp.size()-k]);
                }
            }
            else
            {
                k = 0;
                temp.push_back(stoi(it));
            }
        }
        return v;
    }
};
