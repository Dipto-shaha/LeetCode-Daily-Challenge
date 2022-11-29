class RandomizedSet {
public:
    unordered_map<int,int>m;
    vector<int>nums;
    int n;
    RandomizedSet() {
        n=0;
    }
    bool insert(int val) {
        if(m[val]>=1) return false;
        nums.push_back(val);
        n++;
        m[val]=n;
        return true;
    }
    bool remove(int val) {
        if(m[val]<1) return false;
        if(m[val]!=n){
            nums[m[val]-1]=nums[nums.size()-1];
            m[nums[n-1]]=m[val];
            m[val]=0;
            n--;
            nums.pop_back();
        }
        else
        {
            m[val]=0;
            nums.pop_back();
            n--;
        }
        return true;
    }  
    int getRandom() {
        return nums[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */