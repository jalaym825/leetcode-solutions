class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        for(int amount: bills) {
            if(amount == 5) {
                fives++;
            } else if(amount == 10) {
                if(fives == 0)
                    return false;
                tens++;
                fives--;
            } else if(amount == 20) {
                if(tens > 0) {
                    if(fives >= 1) {
                        tens--;
                        fives--;
                    } else {
                        return false;
                    }
                } else if(fives >= 3){
                    fives -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};