#define ll long long int
class Solution {
public:
    vector<vector<ll>>cnt,dp;
    int mod=1e9+7;
    int fun(int i,string &target,int j,int n)
    {
        if(i>=target.size()) 
            return 1;
        if(j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        long long int ans1=0,ans2=0;
        if(cnt[j][target[i]-'a']) 
        {
            ans1=(cnt[j][target[i]-'a']*fun(i+1,target,j+1,n))%mod;
        }
        ans2=fun(i,target,j+1,n);
        dp[i][j]=(ans1+ans2)%mod;
        return dp[i][j];
    }
    int numWays(vector<string>& words, string target) {
        int n=words[0].size(),i;
        cnt.resize(n,vector<ll>(26,0));
        dp.resize(target.size(),vector<ll>(n,-1));
        for(auto u:words)
        {
            for(i=0;i<n;i++)
            {
                cnt[i][u[i]-'a']++;
            }
        }
        return fun(0,target,0,n);
    }
};