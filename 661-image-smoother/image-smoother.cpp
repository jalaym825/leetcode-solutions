class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int sum = img[i][j];
                int temp = 1;
                if(j - 1 >= 0)
                {
                    sum += img[i][j - 1];
                    temp++;
                    if(i - 1 >= 0)
                    {
                        sum += img[i - 1][j - 1];
                        temp++;
                    }
                    if(i + 1 < m)
                    {
                        sum += img[i + 1][j - 1];
                        temp++;
                    }
                }
                if(i - 1 >= 0)
                {
                    sum += img[i - 1][j];
                    temp++;
                }
                if(i + 1 < m)
                {
                    sum += img[i + 1][j];
                    temp++;
                }
                if(j + 1 < n)
                {
                    sum += img[i][j + 1];
                    temp++;
                    if(i - 1 >= 0)
                    {
                        sum += img[i - 1][j + 1];
                        temp++;
                    }
                    if(i + 1 < m)
                    {
                        sum += img[i + 1][j + 1];
                        temp++;
                    }
                }

                ans[i][j] = sum / temp;
            }
        }
        return ans;
    }
};