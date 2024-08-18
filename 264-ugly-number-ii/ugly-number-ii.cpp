class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        unordered_set<long long> st;
        
        minHeap.push(1);
        st.insert(1);
        
        long long ans = 1;
        
        for (int i = 0; i < n; ++i) {
            ans = minHeap.top();
            minHeap.pop();
            
            if (st.find(ans * 2) == st.end()) {
                minHeap.push(ans * 2);
                st.insert(ans * 2);
            }
            if (st.find(ans * 3) == st.end()) {
                minHeap.push(ans * 3);
                st.insert(ans * 3);
            }
            if (st.find(ans * 5) == st.end()) {
                minHeap.push(ans * 5);
                st.insert(ans * 5);
            }
        }
        
        return static_cast<int>(ans);
    }
};
