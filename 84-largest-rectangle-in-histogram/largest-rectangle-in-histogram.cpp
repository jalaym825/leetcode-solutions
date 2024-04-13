class Solution {
private:
    vector<int> nextSmallerElement(vector<int>&h, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--)
        {
            int cur = h[i];
            while(s.top() != -1 && h[s.top()] >= cur)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>&h, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = 0; i < n; i++)
        {
            int cur = h[i];
            while(s.top() != -1 && h[s.top()] >= cur)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int ans = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int l = heights[i];

            if(next[i] == -1)
            {
                next[i] = n;
            }

            int b = next[i] - prev[i] - 1;
            int area = l * b;
            ans = max(ans, area);
        }

        return ans;

    }
};