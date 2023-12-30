class Solution {
public:
    bool makeEqual(vector<string>& words) {
         vector<int>cnt(26,0);
         int n=words.size();
         for(auto u:words)
         {
             for(auto v:u)
             {
                 cnt[v-'a']++;
             }
         }
         for(auto u:cnt)
         {
             if(u%n!=0)
                 return false;
         }
        return true;
    }
};