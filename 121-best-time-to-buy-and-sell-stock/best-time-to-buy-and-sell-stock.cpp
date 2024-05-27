class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)
            return 0;
        int diff;
        int mini = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < mini)
            {
                mini = prices[i];
            }
            else
            {
                diff = max(diff, prices[i] - mini);
            }
        }
        return diff;
    }
};