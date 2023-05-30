class MyHashSet {
public:
    int arr[(int)1e6+1];
    MyHashSet() {
        
    }
    
    void add(int key) {
        arr[key]=1;
    }
    
    void remove(int key) {
        arr[key]=0;
    }
    
    bool contains(int key) {
        if(arr[key]>0) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */