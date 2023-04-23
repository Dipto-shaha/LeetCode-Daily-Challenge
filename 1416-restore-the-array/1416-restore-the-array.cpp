class Solution {
public:
    int mod=1e9+7;
    vector<int>dp;
    int fun(string &s,int l,int k)
    {
        if(l>=s.size()) return 1;
        if(dp[l]!=-1) return dp[l];
        long long int ans=0,num=0;
        for(int j=l;j<s.size();j++)
        {
            num=num*10+s[j]-'0';
            if(num>=1 && num<=k)
                ans=(ans+fun(s,j+1,k))%mod;
            else break;
        }
        dp[l]=ans;
        return ans;
    }
    int numberOfArrays(string s, int k) {
        dp.resize(s.size(),-1);
        return fun(s,0,k);
    }
};