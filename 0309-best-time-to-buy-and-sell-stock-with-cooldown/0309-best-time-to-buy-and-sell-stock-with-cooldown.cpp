class Solution {
public:
    int dp[5001];
    vector<int>p;
    int n;
    int fun(int i)
    {
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=0;
        for(int j=i+1;j<n;j++)
        {
            ans=max(ans,p[j]-p[i]+fun(j+2));
            ans=max(ans,fun(j));
        }
        dp[i]=ans;
        return dp[i];
    }
    int maxProfit(vector<int>& prices) {
        p=prices;
        n=p.size();
        memset(dp,-1,sizeof(dp));
        return fun(0);
    }
};