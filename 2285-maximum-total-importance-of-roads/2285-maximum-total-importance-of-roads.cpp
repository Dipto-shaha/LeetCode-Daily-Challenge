class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>cnt(n,0);
        for(auto u:roads){
            cnt[u[0]]++;
            cnt[u[1]]++;
        }
        sort(cnt.begin(),cnt.end());
        long long  ans=0;
        for(int i=n-1;i>=0;i--){
            ans+=(i+1)*1LL*cnt[i];
        }
        return ans;
    }
};