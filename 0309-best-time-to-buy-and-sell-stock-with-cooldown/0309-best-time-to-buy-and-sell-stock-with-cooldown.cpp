class Solution {
public:
    int dp[5001];
    int fun(vector<int>& prices,int i)
    {
        int n=prices.size();
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=0;
        for(int j=i+1;j<n;j++)
        {
            ans=max(ans,prices[j]-prices[i]+fun(prices,j+2));
            ans=max(ans,fun(prices,j));
        }
        dp[i]=ans;
        return dp[i];
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return fun(prices,0);
    }
};