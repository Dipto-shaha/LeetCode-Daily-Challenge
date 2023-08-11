class Solution {
public:
    int dp[5001][301];
    int fun(int amount,int i, vector<int>& coins)
    {
        if(amount==0) return 1;
        if(i>=coins.size()) return 0;
        if(dp[amount][i]!=-1) return dp[amount][i];
        int ans=0;
        for(int j=i;j<coins.size();j++)
        {
            if(coins[j]<=amount)
                ans+=fun(amount-coins[j],j,coins);
        }
        dp[amount][i]=ans;
        return ans;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return fun(amount,0,coins); 
    }
};