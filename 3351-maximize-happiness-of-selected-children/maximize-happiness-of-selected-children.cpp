class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        long long hap = 0;
        for(int i = 0; i < k; i++)
        {
            hap += (happiness[i] - i >= 0 ? happiness[i] - i : 0);
        }
        return hap;
    }
};