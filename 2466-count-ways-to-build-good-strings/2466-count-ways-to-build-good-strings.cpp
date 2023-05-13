class Solution {
public:
    int l,h,z,o,mod=1e9+7;
    int fun(int len,vector<int>&dp)
    {
        if(len>h) return 0;
        if(dp[len]!=-1) return dp[len];
        long long ans=0;
        if(len>=l) ans+=1;
        ans=(ans+fun(len+z,dp)+fun(len+o,dp))%mod;
        dp[len]=ans;
        return ans;
        
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        l=low,h=high,z=zero,o=one;
        vector<int>dp(h+1,-1);
        return fun(0,dp);
    }
};