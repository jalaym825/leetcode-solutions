class Solution {
public:
    int maxBottlesDrunk(int numBots, int numEx) {
        int drank = numBots;
        numBots = 0;
        int empBots = drank;
        while(empBots != 0)
        {
            if(empBots >= numEx)
            {
                empBots -= numEx;
                empBots++;
                drank++;
                numEx++;
            }
            else 
            {
                break;
            }
        }
        return drank;
    }
};