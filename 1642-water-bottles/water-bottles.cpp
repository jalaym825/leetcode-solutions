class Solution {
public:
    int numWaterBottles(int bottles, int change) {
        int ans = bottles;

        while(bottles >= change){
            ans += bottles / change;
            bottles = bottles / change + bottles % change;
        }
        return ans;
    }
};