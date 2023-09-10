class Solution {
public:
    int countOrders(int n) {
        int mod=1e9+7,i,ans=1;
        for(i=1;i<=n;i++)
        {
            ans=(ans*1LL*i)%mod;
            ans=(ans*1LL*(2*i-1))%mod;
        }
        return ans;
    }
};