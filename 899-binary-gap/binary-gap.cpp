class Solution
{
public:
    string getBinary(int number)
    {
        string binary;
        for (int i = 0; number > 0; i++)
        {
            if (number == number / 2 * 2)
                binary.push_back('0');
            else
                binary.push_back('1');
            number /= 2;
        }
        reverse(binary.begin(), binary.end());
        return binary;
    }
    int binaryGap(int n)
    {
        string str = getBinary(n);
        int flag = 0;
        int i1 = -1, counter = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
            {
                if (i1==-1)
                    i1 = i;
                if (i - i1 > counter)
                    counter = i - i1;
                i1 = i;
            }
        }
        return counter;
    }
};