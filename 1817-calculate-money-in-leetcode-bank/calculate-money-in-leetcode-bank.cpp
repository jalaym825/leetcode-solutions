class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int remDays = n%7;
        int bank = (weeks * 28) + (7 * weeks * (weeks - 1) / 2); // for complete weeks
        bank +=  (remDays / 2.0) * ((weeks + 1)+ (weeks + remDays)); // sum of ap, n/2(a + l)
        // bank += (remDays / 2.0) * ((2 * (weeks + 1)) + (remDays - 1)); // sum of ap, n/2(2a+(n-1)*d)
        return bank;
    }
};