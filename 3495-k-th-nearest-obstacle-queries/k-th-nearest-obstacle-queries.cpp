class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& q, int k) {
        int n = q.size();
        priority_queue<int> pq;
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            pq.push(abs(q[i][0]) + abs(q[i][1]));
            if(pq.size() > k) pq.pop();
            res[i] = (pq.size() == k) ? pq.top() : -1;
        }
        return res;
    }
};