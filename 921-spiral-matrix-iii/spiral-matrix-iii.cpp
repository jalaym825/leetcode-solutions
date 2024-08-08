class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int total = rows * cols;
        int visited = 0;
        int r = rStart, c = cStart;
        ans.push_back({r, c});
        visited++;

        int counter = 1;
        while (visited < total) {
            for (int i = 0; i < counter; ++i) {
                c++;
                if (c >= 0 && c < cols && r >= 0 && r < rows) {
                    ans.push_back({r, c});
                    visited++;
                }
            }
            for (int i = 0; i < counter; ++i) {
                r++;
                if (c >= 0 && c < cols && r >= 0 && r < rows) {
                    ans.push_back({r, c});
                    visited++;
                }
            }
            counter++; 

            for (int i = 0; i < counter; ++i) {
                c--;
                if (c >= 0 && c < cols && r >= 0 && r < rows) {
                    ans.push_back({r, c});
                    visited++;
                }
            }

            for (int i = 0; i < counter; ++i) {
                r--;
                if (c >= 0 && c < cols && r >= 0 && r < rows) {
                    ans.push_back({r, c});
                    visited++;
                }
            }
            counter++;
        }

        return ans;
    }
};
