class Solution {
public:
    int numTilings(int n) {
        int dp[n+5],mod=1e9+7,i=4;
        dp[0]=0,dp[1]=1,dp[2]=2,dp[3]=5;
        while(i<=n)
        {
            dp[i]=((2*dp[i-1])%mod+dp[i-3])%mod;
            i++;
        }
        return dp[n];
    }
};