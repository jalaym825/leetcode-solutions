class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for(int i = 0; i < target.size(); i++)
        {
            mp1[target[i]]++;
            mp2[arr[i]]++;
        }

        if(mp1.size() != mp2.size())
        {
            return false;
        }

        for(auto it: mp1){
            if(mp2[it.first] != it.second) {
                return false;
            }
        }

        return true;
    }
};