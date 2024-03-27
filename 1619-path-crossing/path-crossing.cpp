class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<string, bool> mp;
        mp["0_0"] = true;

        int x = 0, y = 0;
        for (char ch : path) {
            if (ch == 'N') {
                y++;
            } else if (ch == 'S') {
                y--;
            } else if (ch == 'E') {
                x++;
            } else if (ch == 'W') {
                x--;
            }

            if (mp[to_string(x) + "_" + to_string(y)] == true) {
                return true;
            }

            mp[to_string(x) + "_" + to_string(y)] = true;
        }
        return false;
    }
};
