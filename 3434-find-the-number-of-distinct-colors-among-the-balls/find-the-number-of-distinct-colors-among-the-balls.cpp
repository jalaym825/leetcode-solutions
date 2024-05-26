class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballToColor; // ball ka color
        unordered_map<int, int> colorToBalls; // color ke kitne balls
        vector<int> ans;
        for(auto q: queries)
        {
            if(ballToColor.find(q[0]) != ballToColor.end())
            {
                colorToBalls[ballToColor[q[0]]]--;
                if(colorToBalls[ballToColor[q[0]]] == 0)
                    colorToBalls.erase(ballToColor[q[0]]);
            }
            ballToColor[q[0]] = q[1];
            colorToBalls[q[1]]++;
            ans.push_back(colorToBalls.size());
        }
        return ans;
    }
};