class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size(),i,cntA=0,cntB=0,ans=INT_MAX;
        vector<int>cnt(n,0);
        for(i=n-1;i>=0;i--){
            if(s[i]=='a') cntA++;
            cnt[i]=cntA;
        }
        for(i=0;i<n;i++){
            ans=min(ans,cntB+cnt[i]);
            if(s[i]=='b') cntB++;
        }
        ans=min(ans,cntA);
        ans=min(ans,cntB);
        return ans;
        
    }
};