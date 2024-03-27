class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0;
        for(int i = 0; i < dimensions.size(); i++)
        {
            float preDia = sqrt((dimensions[ans][0] * dimensions[ans][0]) + (dimensions[ans][1] * dimensions[ans][1]));
            float dia = sqrt((dimensions[i][0] * dimensions[i][0]) + (dimensions[i][1] * dimensions[i][1]));
            if(dia >= preDia)
                ans = i;
        }
        int area = -1;
        float diaLength = sqrt((dimensions[ans][0] * dimensions[ans][0]) + (dimensions[ans][1] * dimensions[ans][1]));
        for(auto it: dimensions)
        {
            float dia = sqrt((it[0] * it[0]) + (it[1] * it[1]));
            if(dia == diaLength)
            {
                area = max(area, it[0] * it[1]);
            }
        }
        return area;
    }
};