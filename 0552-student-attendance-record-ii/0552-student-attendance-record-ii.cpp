class Solution {
public:
    int mod = 1e9+7;
    int dp[100001][3][2];
    int fun(int n,int l,int p){
        if(n==0)return 1;
        if(dp[n][l][p]!=-1) return dp[n][l][p];
        int ans=0;
        if(p==0) ans=(ans+fun(n-1,0,1))%mod;
        if(l<2) ans=(ans+fun(n-1,l+1,p))%mod;
        ans=(ans+fun(n-1,0,p))%mod;
        dp[n][l][p]=ans;
        return ans;
    }
    int checkRecord(int n) {
        memset(dp,-1,sizeof(dp));
        return fun(n,0,0);
        
    }
};