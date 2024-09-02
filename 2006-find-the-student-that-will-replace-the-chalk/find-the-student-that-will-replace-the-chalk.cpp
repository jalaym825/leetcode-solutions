class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        long long totalChalks = 0;
        for(int n: chalk)
            totalChalks += n;

        long long remChalks = k % totalChalks;

        for(int i = 0; i < chalk.size(); i++)
        {
            if(remChalks < chalk[i])
                return i;
            remChalks -= chalk[i];
        }
        return 0;
    }
};