class TimeMap {
public:
    map<pair<string, int>, string> mp;
    map<string, string> mp2;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[{key, timestamp}] = value;
        mp2[key] = value;
    }
    
    string get(string key, int timestamp) {
        if(mp2.find(key) == mp2.end()) return "";
        else {
            auto it = mp.upper_bound({key, timestamp});
            if (it == mp.begin()) return "";
            it--;
            return mp[it->first];
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */