class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            int xorr = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                xorr ^= arr[j];
                if (xorr == 0)
                    ans += (j - i);
            }
        }
        return ans;
    }
};