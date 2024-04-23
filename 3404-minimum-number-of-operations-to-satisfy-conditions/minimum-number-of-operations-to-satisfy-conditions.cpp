class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> freqCols;

        for(int i = 0; i < n; i++)
        {
            vector<int> currF(10, 0);
            for(int j = 0; j < m; j++)
            {
                currF[grid[j][i]]++;
            }
            freqCols.push_back(currF);
        }

        vector<int> preMoves(10, 0);
        for(int i = 0; i < n; i++)
        {
            vector<int> currMoves(10, 0);
            for(int currMake = 0; currMake < 10; currMake++)
            {
                int preMin = INT_MAX;
                for(int preNum = 0; preNum < 10; preNum++)
                {
                    if(preNum == currMake)
                        continue;
                    preMin = min(preMin, preMoves[preNum]);
                }
                currMoves[currMake] = preMin + m - freqCols[i][currMake];
            }
            preMoves = currMoves;
        }
        return *min_element(preMoves.begin(), preMoves.end());
    }
};
