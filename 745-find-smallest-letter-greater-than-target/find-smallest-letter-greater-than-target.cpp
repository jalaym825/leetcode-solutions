class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        if (target < letters[0] || target >= letters.back())
        {
            return letters[0];
        }
        set<char> s(letters.begin(), letters.end());
        int start = 0;
        int end = s.size() - 1;
        int mid = start + (end - start) / 2;
        char ans;
        while (start <= end)
        {
            if (*next(s.begin(), mid) == target || (*next(s.begin(), mid) < target && *next(s.begin(), mid + 1) > target))
            {
                ans = *next(s.begin(), mid + 1);
                break;
            }
            if (*next(s.begin(), mid) < target)
                start = mid + 1;
            else
                end = mid - 1;
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};
