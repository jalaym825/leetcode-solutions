class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1]++;
        int x;
        if (digits[digits.size() - 1] <= 9)
            return digits;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] > 9)
            {
                x = digits[i] / 10;
                digits[i] = digits[i] % 10;
                if (i == 0)
                {
                    vector<int> v;
                    v.push_back(x);
                    for (auto i : digits)
                        v.push_back(i);
                    return v;
                }
                digits[i - 1] += x;
            }
        }
        return digits;
    }
};