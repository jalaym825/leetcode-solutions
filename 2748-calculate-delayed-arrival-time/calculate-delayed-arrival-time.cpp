class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum = arrivalTime + delayedTime;
        while(sum >= 24) {
            sum -= 24;
        }
        return sum;
    }
};