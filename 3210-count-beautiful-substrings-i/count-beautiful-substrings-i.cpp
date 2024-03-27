class Solution
{
public:
    int beautifulSubstrings(string s, int k)
    {
        int vowels = 0, consonants = 0;
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            vowels = consonants = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
                if (vowels == consonants && (vowels * consonants) % k == 0)
                    ans++;
            }
        }
        return ans;
    }
};