class SmallestInfiniteSet {
public:
    int ans=1;
    map<int,int>m;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        while(m[ans]==-1) ans++;
        m[ans]=-1;
        ans++;
        return ans-1;
    }
    
    void addBack(int num) {
        m[num]=0;
        if(num<ans) ans=num;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */