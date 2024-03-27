class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        int teams = n;
        while(teams != 1)
        {
            if(teams % 2 == 1) // odd
            {
                matches += (teams - 1)/2;
                teams = ((teams-1)/2)+1;
            }
            else
            {
                matches += teams/2;
                teams /= 2;
            }
        }
        return matches;
    }
};