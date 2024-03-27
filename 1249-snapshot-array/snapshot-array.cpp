class SnapshotArray {
   int id=0; 
   vector<map<int, int>> id_v;

public:
    SnapshotArray(int length) { 
        id_v.assign(length, {{0,0}});   
    }
    
    void set(int index, int val) {
        id_v[index][id]=val;
    }
    
    int snap() {
       return id++; 
    }
    
    int get(int index, int snap_id) {
        if (id_v[index].count(snap_id)==0){
            auto it=prev(id_v[index].lower_bound(snap_id));
            return it->second;
        }
        return  id_v[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */