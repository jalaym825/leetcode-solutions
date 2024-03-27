class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if(n==0)return 1;
        int i;
        bitset<32> bs(n);
        string str = bs.to_string();
        for (i = 0; i < str.length(); i++)
            if (str[i] == '1')
                break;
        str.erase(0, i);
        for (i = 0; i < str.length(); i++)
            str[i] == '1' ? str[i] = '0' : str[i] = '1';

        bitset<32> bits(str);
        n = bits.to_ullong();
        return n;
    }
};