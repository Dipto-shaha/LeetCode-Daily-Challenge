class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>cnt(26,0);
        string ans="";
        for(auto u:s) cnt[u-'a']++;
        for(auto u:order){
            while(cnt[u-'a']--) ans+=u;
        }
        for(int i=0;i<26;i++){
            while(cnt[i]>0) ans+=char(i+'a'),cnt[i]--;
        }
        return ans;
    }
};