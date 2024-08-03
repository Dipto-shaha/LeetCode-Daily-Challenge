class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>m;
        for(auto u:target){
            m[u]++;
        }
        for(auto u:arr){
            m[u]--;
            if(m[u]<0) return false;
        }
        for(auto u:target){
            if(m[u]) return false;
        }
        return true;
    }
};