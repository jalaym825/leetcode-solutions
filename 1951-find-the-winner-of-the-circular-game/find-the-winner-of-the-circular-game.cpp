
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v;
        for(int i = 1; i <= n; i++)
            v.push_back(i);
        
        int i = (k - 1) % v.size();
        while (v.size() != 1)
        {
            v.erase(v.begin() + i);
            i += k - 1;
            i %= v.size();
        }
        return v[0];
    }
};