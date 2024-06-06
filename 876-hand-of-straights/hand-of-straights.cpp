class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> mp;
        for(int num: hand)
        {
            mp[num]++;
        }
        if(hand.size() % groupSize != 0 || mp.size() < groupSize)
            return false;
        
        for(int i = 0; i < hand.size() / groupSize; i++)
        {
            if(mp.size() == 0 || mp.size() < groupSize)
                return false;

            auto it = mp.begin();
            int prev = -1;
            vector<int> toRemove;
            for(int j = 0; j < groupSize; j++)
            {
                if(prev != -1 && it->first - prev != 1)
                    return false;
                mp[it->first]--;

                
                if(mp[it->first] == 0)
                    toRemove.push_back(it->first);
                prev = it->first;
                it++;
            }
            for(int remove: toRemove)
                mp.erase(remove);
        }
        return true;
    }
};