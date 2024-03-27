class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int s1 = 0;
        int col = matrix[0].size();
        int e1 = matrix.size() - 1;
        int mid1 = s1 + (e1 - s1) / 2;
        while (s1 <= e1)
        {
            if (matrix[mid1][0] <= target || matrix[mid1][col - 1] >= target)
            {
                if (matrix[mid1][0] == target || matrix[mid1][col - 1] == target)
                    return true;
                int s2 = 0;
                int e2 = col - 1;
                int mid2 = s2 + (e2 - s2) / 2;
                while (s2 <= e2)
                {
                    if (matrix[mid1][mid2] == target)
                    {
                        return true;
                    }
                    if (matrix[mid1][mid2] < target)
                    {
                        s2 = mid2 + 1;
                    }
                    else
                    {
                        e2 = mid2 - 1;
                    }
                    mid2 = s2 + (e2 - s2) / 2;
                }
            }
            if (matrix[mid1][col - 1] < target)
            {
                s1 = mid1 + 1;
            }
            else
            {
                e1 = mid1 - 1;
            }
            mid1 = s1 + (e1 - s1) / 2;
        }
        return false;
    }
};
