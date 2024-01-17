class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         map<int,int>m;
         set<int>s;
         for(auto u:arr)
         {
             m[u]++;
         }
         for(auto u:m)
         {
             if(s.find(u.second)!=s.end()) return false;
             s.insert(u.second);
         }
         return true;
    }
};