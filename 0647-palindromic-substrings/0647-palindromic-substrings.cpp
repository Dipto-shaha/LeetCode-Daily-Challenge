class Solution {
public:
    int countSubstrings(string s) {
        int i,j,n=s.size();
        int dp[n][n],ans=n;
        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++)
        {
            dp[i][i]=1;
            if(i+1<n && s[i]==s[i+1])
                dp[i][i+1]=1,ans++;
        }
        for(i=2;i<n;i++)
        {
            for(j=0;j+i<n;j++)
            {
                if(s[j]==s[j+i] && dp[j+1][j+i-1]!=-1)
                    dp[j][j+i]=1,ans++;
            }
        }
        return ans;
    }
};