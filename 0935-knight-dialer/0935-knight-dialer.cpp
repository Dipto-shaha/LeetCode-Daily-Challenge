class Solution {
public:
    int dp[5001][10],mod=1e9+7;
    vector<vector<int>>pos={{4,6},{6,8},{7,9},{8,4},{3,0,9},{},{1,0,7},{6,2},{1,3},{4,2}};
    int fun(int k,int n,int i)
    {
        if(k==n) return 1;
        if(dp[k][i]!=-1)return dp[k][i];
        int ans=0;
        for(auto u:pos[i])
                ans=(ans+0LL+fun(k+1,n,u))%mod;
        dp[k][i]=ans;
        return ans;
        
        
    }
    int knightDialer(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<=9;i++)
        {
            ans=(ans+0LL+fun(1,n,i))%mod;
        }
        return ans;
    }
};