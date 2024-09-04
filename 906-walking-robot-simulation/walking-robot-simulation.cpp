class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        char dir = 'N';
        int x = 0, y = 0;
        int maxDist = 0;

        set<pair<int, int>> obstacleSet;
        for (auto obstacle : obstacles) {
            obstacleSet.insert(make_pair(obstacle[0], obstacle[1]));
        }

        for (int command : commands) {
            if (command == -1) {
                if (dir == 'N')
                    dir = 'E';
                else if (dir == 'E')
                    dir = 'S';
                else if (dir == 'S')
                    dir = 'W';
                else
                    dir = 'N';
            } else if (command == -2) {
                if (dir == 'N')
                    dir = 'W';
                else if (dir == 'W')
                    dir = 'S';
                else if (dir == 'S')
                    dir = 'E';
                else
                    dir = 'N';
            } else {
                for (int i = 0; i < command; ++i) {
                    int newX = x, newY = y;
                    if (dir == 'N')
                        newY++;
                    else if (dir == 'E')
                        newX++;
                    else if (dir == 'S')
                        newY--;
                    else if (dir == 'W')
                        newX--;

                    if (obstacleSet.find(make_pair(newX, newY)) != obstacleSet.end())
                        break;

                    x = newX;
                    y = newY;
                    maxDist = max(maxDist, x * x + y * y);
                }
            }
        }
        return maxDist;
    }
};
