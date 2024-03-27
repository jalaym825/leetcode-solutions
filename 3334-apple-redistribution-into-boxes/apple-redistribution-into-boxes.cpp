class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples = accumulate(apple.begin(), apple.end(), 0);
        int cap = 0;
        int boxes = 0;
        sort(capacity.rbegin(), capacity.rend());
        for(auto num: capacity)
        {
            if(cap >= apples)
                break;
            cap += num;
            boxes++;
        }
        return boxes;
    }
};