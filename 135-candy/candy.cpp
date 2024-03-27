class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> l(ratings.size(), 1);
        int sum;
        for (int i = 1; i < ratings.size(); ++i)
            if (ratings[i] > ratings[i - 1])
                l[i] = l[i - 1] + 1;

        sum = l.back();
        for (int i = ratings.size() - 2; i >= 0; --i)
        {
            if (ratings[i] > ratings[i + 1])
                l[i] = max(l[i + 1] + 1, l[i]);
            sum += l[i];
        }
        return sum;
    }
};