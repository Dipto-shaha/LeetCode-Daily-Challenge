class Solution {
public:
    int dp[60];
    int fun(int n)
    {
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        int ans=-1;
        for(int i=1;i<=(n+1)/2;i++)
        {
            ans=max(ans,fun(i)*fun(n-i));
            ans=max(ans,i*(n-i));
            ans=max(ans,fun(i)*(n-i));
            ans=max(ans,i*fun(n-i));
        }
        dp[n]=ans;
        return ans;
    }
    int integerBreak(int n) {
        memset(dp,-1,sizeof(dp));
        return fun(n);
    }
};