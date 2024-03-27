class Solution
{
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>> &score, int k)
    {
        map<int, int> m;
        vector<vector<int>> v(score.size());
        for (int i = 0; i < score.size(); i++)
        {
            m.insert({score[i][k], i});
        }

        auto it = m.begin();

        for (int i = 0; i < score.size(); i++)
        {
            v[score.size() - 1 - i] = score[it->second];
            it++;
        }
        return v;
    }
};
