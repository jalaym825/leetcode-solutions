class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        for(int num: temp) {
            if(mp[num] == 0)
                mp[num] = mp.size();
        }
        vector<int> ans;
        for(int num: arr)
        {
            ans.push_back(mp[num]);
        }
        return ans;
    }
};