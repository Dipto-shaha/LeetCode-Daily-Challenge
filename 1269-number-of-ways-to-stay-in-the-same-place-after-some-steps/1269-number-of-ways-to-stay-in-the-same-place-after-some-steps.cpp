class Solution {
public:
    int dp[501][501],l,mod=1e9+7;
    int fun(int pos,int steps)
    {
        if(pos==0 && steps==0) return 1;
        if(pos<0 || pos>=l || steps<=0 ) return 0;
        if(dp[steps][pos]!=-1) return dp[steps][pos];
        dp[steps][pos]=(0LL+fun(pos-1,steps-1)%mod+fun(pos,steps-1)%mod+fun(pos+1,steps-1)%mod)%mod;
        return dp[steps][pos];
    }
    int numWays(int steps, int arrLen) {
        memset(dp,-1,sizeof(dp));
        l=arrLen;
        return fun(0,steps);
    }
};