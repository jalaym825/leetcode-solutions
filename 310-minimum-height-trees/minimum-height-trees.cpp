class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) {
            return {0};
        }
        
        unordered_map<int, vector<int>> adjacencyList;
        vector<int> inDegrees(n, 0);
        
        for (const auto& connection : edges) {
            int node1 = connection[0], node2 = connection[1];
            adjacencyList[node1].push_back(node2);
            adjacencyList[node2].push_back(node1);
            inDegrees[node1]++;
            inDegrees[node2]++;
        }
        
        queue<int> leafQueue;
        for (int i = 0; i < n; i++) {
            if (inDegrees[i] == 1) {
                leafQueue.push(i);
            }
        }
        
        int remainingNodes = n;
        while (remainingNodes > 2) {
            int levelSize = leafQueue.size();
            remainingNodes -= levelSize;
            
            for (int i = 0; i < levelSize; i++) {
                int leafNode = leafQueue.front();
                leafQueue.pop();
                for (int neighbor : adjacencyList[leafNode]) {
                    inDegrees[neighbor]--;
                    if (inDegrees[neighbor] == 1) {
                        leafQueue.push(neighbor);
                    }
                }
            }
        }
        
        vector<int> result;
        while (!leafQueue.empty()) {
            result.push_back(leafQueue.front());
            leafQueue.pop();
        }
        
        return result;
    }
};
