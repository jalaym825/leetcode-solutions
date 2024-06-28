class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> nodes(n);
        for(int i = 0; i < roads.size(); i++)
        {
            nodes[roads[i][0]]++;
            nodes[roads[i][1]]++;
        }
        sort(nodes.rbegin(), nodes.rend());
        long long i = n;
        long long ans = 0;
        for(int j = 0; j < nodes.size(); j++)
        {
            ans += nodes[j] * i--;
        }
        return ans;
    }
};