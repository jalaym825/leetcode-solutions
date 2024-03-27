class Solution {
public:
    int trailingZeroes(int n) {
        return floor(n / 5) + floor(n / 25) + floor(n / 125) + floor(n / 625) + floor(n / 3125);
    }
};