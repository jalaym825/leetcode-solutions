class Solution
{
private:
    bool isSymmetric(int num)
    {
        string numStr = to_string(num);
        if (numStr.size() % 2 != 0)
            return false;
        int n = numStr.length() / 2;
        string a = numStr.substr(0, n);
        string b = numStr.substr(n);

        int x = 0, y = 0;
        for (char digit : a)
            x += digit - '0';
        for (char digit : b)
            y += digit - '0';

        return x == y;
    }

public:
    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;
        for (int num = low; num <= high; ++num)
            if (isSymmetric(num))
                count++;
        return count;
    }
};
