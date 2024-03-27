class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int x = 0;
        int y = 0;
        for(int i = 1; i < colors.size(); i++) {
            if(colors[i] != colors[0]) {
                x = i;
            }
            if(colors[i] != colors[0] && y == 0) {
                y = i;
            }
        }
        y = colors.size() - 1 - y;
        return x > y ? x : y;
    }
};