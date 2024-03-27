class SmallestInfiniteSet {

public:
    set <int> s;
    SmallestInfiniteSet() {
        for(int i = 0; i < 1000; i++) {
            s.insert(i+1);
        }
    }
    
    int popSmallest() {
        int x = *s.begin();
        s.erase(s.begin());
        return x;
    }
    
    void addBack(int num) {
        s.insert(num);
    }
};