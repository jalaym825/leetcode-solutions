class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        // Step 1: Calculate the initial satisfaction without any change
        int totalSatisfaction = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                totalSatisfaction += customers[i];
            }
        }
        
        // Step 2: Use sliding window to find the maximum extra satisfaction we can gain
        int maxExtraSatisfaction = 0, extraSatisfaction = 0;
        for (int i = 0; i < n; ++i) {
            // Add the extra satisfaction if grumpy[i] is 1
            if (grumpy[i] == 1) {
                extraSatisfaction += customers[i];
            }
            // Remove the extra satisfaction from the start of the window if it exceeds 'minutes'
            if (i >= minutes && grumpy[i - minutes] == 1) {
                extraSatisfaction -= customers[i - minutes];
            }
            // Update the maximum extra satisfaction
            maxExtraSatisfaction = max(maxExtraSatisfaction, extraSatisfaction);
        }
        
        return totalSatisfaction + maxExtraSatisfaction;
    }
};
