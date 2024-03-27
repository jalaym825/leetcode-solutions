class Solution {
public:
    int minimumSum(int n, int k) {
        int sum = 0;
        int x = 1;
        set<int> s;
        
        for(int i = 0; i < n;) {
            if(s.find(x) == s.end())
            {
                sum+=x;
                s.insert(k - x);
                i++;
            }
            x++;
        }
        return sum;
    }
};
