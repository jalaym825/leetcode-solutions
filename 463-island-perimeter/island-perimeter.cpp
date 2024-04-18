class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int pre = 0;
                if(grid[i][j] == 1)
                {
                    //up
                    if(i-1<0)
                        pre++;
                    else
                    {
                        if(grid[i-1][j] == 0)
                            pre++;
                    }
                    //right
                    if(j + 1 >= m)
                        pre++;
                    else
                    {
                        if(grid[i][j+1] == 0)
                            pre++;
                    }
                    //dowwn
                    if(i + 1 >= n)
                        pre++;
                    else
                    {
                        if(grid[i+1][j] ==  0)
                            pre++;
                    }
                    //left
                    if(j-1<0)
                        pre++;
                    else
                    {
                    if(grid[i][j-1] == 0)
                        pre++;
                    }
                }
                ans += pre;
            }
        }
        return ans;
    }
};