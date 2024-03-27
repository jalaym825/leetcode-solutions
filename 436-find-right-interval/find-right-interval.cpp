class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int> temp;
        int n = intervals.size();
        for(int i=0; i<n; i++) temp.insert({intervals[i][0], i});
        vector<int> ans;
        for(int i=0; i<intervals.size(); i++)
        {
            auto res = temp.lower_bound(intervals[i][1]);
            if(res != temp.end())
                ans.push_back(res->second);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};