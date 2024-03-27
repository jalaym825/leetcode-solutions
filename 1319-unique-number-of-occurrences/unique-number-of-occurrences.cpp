class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int sum = 0;
        vector<int> v;
        set<int> s;
        sort(arr.begin(), arr.end());
        int c = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i + 1 < arr.size() && arr[i] == arr[i + 1])
            {
                c++;
            }
            else
            {
                int size = s.size();
                s.insert(c);
                if (size == s.size())
                    return false;
                c = 1;
            }
        }
        return true;
    }
};
