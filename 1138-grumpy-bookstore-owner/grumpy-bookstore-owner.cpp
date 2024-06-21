class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        int totalSatisfaction = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                totalSatisfaction += customers[i];
            }
        }
        
        int maxExtraSatisfaction = 0, extraSatisfaction = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 1) {
                extraSatisfaction += customers[i];
            }
            if (i >= minutes && grumpy[i - minutes] == 1) {
                extraSatisfaction -= customers[i - minutes];
            }
            maxExtraSatisfaction = max(maxExtraSatisfaction, extraSatisfaction);
        }
        
        return totalSatisfaction + maxExtraSatisfaction;
    }
};