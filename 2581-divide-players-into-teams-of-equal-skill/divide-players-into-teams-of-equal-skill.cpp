class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        for(int num: skill)
            sum += num;
        
        if(sum % (skill.size() / 2) != 0)
            return -1;
        
        long long target = sum / (skill.size() / 2);

        map<int, int> mp;
        for(int num: skill)
            mp[num]++;
        
        long long ans = 0;
        for(int num: skill)
        {
            if(mp[target - num] > 0)
            {
                ans += (num * (target - num));
                mp[target - num]--;
            }
            else
                return -1;
        }
        return ans / 2;
    }
};