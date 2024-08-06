class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> memo(coins.size(), vector<int>(amount + 1, -1));
        int result = fun(coins, coins.size() - 1, amount, memo);
        return result == INT_MAX ? -1 : result;
    }

    int fun(vector<int>& coins, int i, int amount, vector<vector<int>>& memo) {
        if (amount == 0) {
            return 0;
        }
        if (amount < 0 || i < 0) {
            return INT_MAX;
        }

        if (memo[i][amount] != -1) {
            return memo[i][amount];
        }

        int take = INT_MAX;
        if (coins[i] <= amount) {
            int res = fun(coins, i, amount - coins[i], memo);
            if (res != INT_MAX) {
                take = res + 1;
            }
        }

        int skip = fun(coins, i - 1, amount, memo);

        memo[i][amount] = min(take, skip);
        return memo[i][amount];
    }
};
