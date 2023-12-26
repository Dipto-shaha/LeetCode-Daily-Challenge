class Solution {
public:
    int dp[31][1001],mod=(1e9+7);
    int fun(int n, int k, int t)
    {
        if(t==0 && n==0) 
            return 1;
        if(t<=0 || n<=0)
            return 0;
        if(dp[n][t]!=-1) return dp[n][t];
        int ans=0;
        for(int i=1;i<=min(k,t);i++)
        {
            ans=(ans+fun(n-1,k,t-i)%mod)%mod;
        }
        dp[n][t]=ans;
        return ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return fun(n,k,target);
    }
};