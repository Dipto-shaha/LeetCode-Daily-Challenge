class RandomizedSet {
public:
    map<int,int>m;
    vector<int>item;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
         if(m[val]) return false;
         item.push_back(val);
         m[val]=item.size();
         return true;
    }
    
    bool remove(int val) {
         if(!m[val]) return false;
         if(item.size()==1)
         {
             item.clear();
             m.clear();
             return true;
         }
         item[m[val]-1]=item[item.size()-1];
         m[item[item.size()-1]]=m[val];
         m[val]=0;
         item.pop_back();
         return true;
    }
    
    int getRandom() {
        return item[rand()%item.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */