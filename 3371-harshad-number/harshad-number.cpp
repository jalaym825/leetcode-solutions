class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if(x % sum == 0)
            return sum;
        else
            return -1;
    }
};