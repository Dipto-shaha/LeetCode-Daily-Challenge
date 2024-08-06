class Solution {
public:
    int minimumPushes(string word) {
        int ans=0,i,n=0,t=1;
        vector<int>cnt(26,0);
        for(auto u:word){
            cnt[u-'a']++;
        }
        sort(cnt.begin(),cnt.end());
        for(auto i=25;i>=0;i--){
            cout<<cnt[i]<<" ";
            n++;
            if(n>8) t++,n=1;
            ans+=cnt[i]*t;
        }
        return ans;
    }
};