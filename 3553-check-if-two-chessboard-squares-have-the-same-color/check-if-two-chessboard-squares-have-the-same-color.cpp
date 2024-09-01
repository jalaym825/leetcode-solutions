class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        char c1, c2;
        char curr = 'b';
        for(char ch = 'a'; ch <= coordinate1[0]; ch++)
        {
            curr = (curr == 'b' ? 'a' : 'b');
        }
        for(int i = 1; i <= coordinate1[1]-'0'; i++)
        {
            curr = (curr == 'b' ? 'a' : 'b');
        }
        c1 = curr;
        curr = 'b';

        for(char ch = 'a'; ch <= coordinate2[0]; ch++)
        {
            curr = (curr == 'b' ? 'a' : 'b');
        }
        for(int i = 1; i <= coordinate2[1]-'0'; i++)
        {
            curr = (curr == 'b' ? 'a' : 'b');
        }
        c2 = curr;

        return c1 == c2;

    }
};