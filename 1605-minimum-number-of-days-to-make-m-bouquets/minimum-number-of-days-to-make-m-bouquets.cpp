#define bg(x) begin(x)
#define all(x) bg(x), end(x)
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = *min_element(all(bloomDay));
        int maxi = *max_element(all(bloomDay));
        int minAns = -1;
        int bqMade = 0;
        while(mini <= maxi) {
            int mid = mini + (maxi - mini) / 2;
            int bouquets = 0;
            int flowers = 0;
            for(int i = 0; i < bloomDay.size(); i++) {
                if(bloomDay[i] <= mid) {
                    flowers++;
                    if(flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0;
                }
            }
            if(flowers == k) {
                bouquets++;
            }
            bqMade = bouquets;
            if(bouquets < m) {
                mini = mid + 1;
            } else {
                minAns = mid;
                maxi = mid;
                if(mini == maxi)
                    break;
            }
        }
        return bqMade < m ? -1 : minAns;
    }
};
