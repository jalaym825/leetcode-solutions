class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> v;
        int n = profits.size();
        for(int i = 0; i < n; i++)
            v.push_back({capital[i], profits[i]});

        sort(v.begin(), v.end());

        priority_queue<int> mxHeap;
        int i = 0, j = 0;
        while(j < k)
        {
            while(i < n && v[i].first <= w)
            {
                mxHeap.push(v[i].second);
                i++;
            }
            if(mxHeap.empty())
                break;
            w += mxHeap.top();
            mxHeap.pop();
            j++;
        }
        return w;
    }
};