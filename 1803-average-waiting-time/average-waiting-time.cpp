class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int prevTime = customers[0][0] + customers[0][1];
        double ans = prevTime - customers[0][0];
        for(int i = 1; i < customers.size(); i++)
        {
            int arrivalTime = customers[i][0];

            int currTime =  prevTime + customers[i][1] + (arrivalTime > prevTime ? arrivalTime - prevTime: 0);
            prevTime = currTime;
            ans += currTime - customers[i][0];
        }
        return ans / customers.size();
    }
};