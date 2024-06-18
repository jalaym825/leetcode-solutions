#define pb push_back
#define bg(x) begin(x)
#define all(x) bg(x), end(x)

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        int n = difficulty.size();
        
        for (int i = 0; i < n; ++i) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        
        sort(all(jobs));
        
        sort(all(worker));
        
        int maxProfit = 0, jobIndex = 0, ans = 0;
        
        for (int i = 0; i < worker.size(); ++i) {
            while (jobIndex < n && worker[i] >= jobs[jobIndex].first) {
                maxProfit = max(maxProfit, jobs[jobIndex].second);
                ++jobIndex;
            }
            ans += maxProfit;
        }
        
        return ans;
    }
};
